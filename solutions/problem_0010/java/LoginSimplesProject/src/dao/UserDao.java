package dao;

import model.User;

import java.util.List;

public interface UserDao {

    boolean insert(User user);

    List<User> findAll();

    User findByUsername(String username);

    User findByEmail(String email);

    boolean update(User user);

    boolean delete(User user);

    boolean deleteByUsername(String username);
}
