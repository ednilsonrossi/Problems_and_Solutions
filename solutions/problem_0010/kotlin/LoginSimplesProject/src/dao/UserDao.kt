package dao

import model.User

interface UserDao {

    fun insert(user: User): Boolean

    fun findAll(): List<User>

    fun findByUsername(username: String): User?

    fun findByEmail(email: String): User?

    fun update(user: User): Boolean

    fun delete(user: User): Boolean

    fun deleteByUsername(username: String): Boolean
}