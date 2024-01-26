package model;

import dao.UserDao;
import dao.UserDaoImpl;

import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Base64;

public class User {
    private Long userId;
    private String username;
    private String email;
    private String password;

    public User(String username, String email, String password) {
        this.userId = 0L;
        this.username = username;
        this.email = email;
        this.password = hashPassword(password);
    }

    public static boolean autenticateUser(User user, String password){
        if(user == null){
            return false;
        } else return user.getPassword().equals(hashPassword(password));
    }

    public Long getUserId() {
        return userId;
    }

    public void setUserId(Long userId) {
        this.userId = userId;
    }

    public String getUsername() {
        return username;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = hashPassword(password);
    }

    /*
     * A senha não é armazenada em texto plano, a senha está sendo convertida em um hash
     * e esse é armazenado. Ao autenticar um usuário a senha forncedida como entrada também
     * é convertida e os códigos hash é que são comparados.
     *
     * Sugestão de estudo:
     * https://howtodoinjava.com/java/java-security/how-to-generate-secure-password-hash-md5-sha-pbkdf2-bcrypt-examples/
     */
    private static String hashPassword(String pwd){
        try{
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            byte[] hashedBytes = md.digest(pwd.getBytes());
            return Base64.getEncoder().encodeToString(hashedBytes);
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            return null;
        }
    }
}
