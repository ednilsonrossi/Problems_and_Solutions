package dao

import model.User

object UserDaoImpl : UserDao{

    private val usersList = mutableListOf<User>()

    override fun insert(user: User): Boolean {
        for(inDataset in usersList){
            if(inDataset.username == user.username || inDataset.email == user.email)
                return false;
        }
        if(usersList.isEmpty()){
            user.userId = 0;
        }else{
            user.userId = usersList.get(usersList.size - 1).userId + 1
        }
        return usersList.add(user)
    }

    override fun findAll(): List<User> {
        return usersList.toList()
    }

    override fun findByUsername(username: String): User? {
        for(user in usersList){
            if (user.username == username){
                return user
            }
        }
        return null
    }

    override fun findByEmail(email: String): User? {
        for (user in usersList){
            if (user.email == email){
                return user
            }
        }
        return null
    }

    override fun update(user: User): Boolean {
        for ((i, value) in usersList.withIndex()){
            if (value.username == user.username){
                usersList[i] = user
                return true
            }
        }
        return false
    }

    override fun delete(user: User): Boolean {
        return usersList.remove(user)
    }

    override fun deleteByUsername(username: String): Boolean {
        for (user in usersList){
            if(user.username == username){
                return usersList.remove(user)
            }
        }
        return false
    }
}