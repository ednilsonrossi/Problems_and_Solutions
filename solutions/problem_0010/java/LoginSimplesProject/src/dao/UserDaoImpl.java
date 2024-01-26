package dao;

import model.User;

import java.util.ArrayList;
import java.util.List;

public class UserDaoImpl implements UserDao{
    private static UserDaoImpl instance = null;
    private List<User> users;

    private UserDaoImpl(){
        int INITIAL_LIST_SIZE = 10;
        users = new ArrayList<>(INITIAL_LIST_SIZE);
    }

    public static UserDaoImpl getInstance(){
        if (instance == null){
            instance = new UserDaoImpl();
        }
        return instance;
    }

    @Override
    public boolean insert(User user) {
        if(user != null){
            for(User u : users){
                if(u.getUsername().equals(user.getUsername()) || u.getEmail().equals(user.getEmail())){
                    return false;
                }
            }
            if(users.isEmpty()){
                user.setUserId(1L);
            }else {
                user.setUserId(users.get(users.size() - 1).getUserId() + 1);
            }
            return users.add(user);
        }
        return false;
    }

    @Override
    public List<User> findAll() {
        return users;
    }

    @Override
    public User findByUsername(String username) {
        for (User user : users){
            if(user.getUsername().equals(username)){
                return user;
            }
        }
        return null;
    }

    @Override
    public User findByEmail(String email) {
        for (User user : users){
            if(user.getEmail().equals(email)){
                return user;
            }
        }
        return null;
    }

    @Override
    public boolean update(User user) {
        for (User value : users) {
            if (value.getUsername().equals(user.getUsername())) {
                value = user;
                return true;
            }
        }
        return false;
    }

    @Override
    public boolean delete(User user) {
        return users.remove(user);
    }

    @Override
    public boolean deleteByUsername(String username) {
        var inDataset = findByUsername(username);
        return users.remove(inDataset);
    }
}
