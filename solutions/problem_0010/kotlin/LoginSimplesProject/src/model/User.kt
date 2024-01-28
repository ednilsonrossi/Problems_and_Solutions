package model

import java.security.MessageDigest
import java.util.Base64

class User (var username: String, var email: String, private val argPassword: String){
    var userId = 0L
    var password: String = ""
        set(value){
            field = hashPassword(value)
        }

    init {
        password = hashPassword(argPassword)
    }

    companion object{
        fun autenticateUser(user: User, password: String): Boolean{
            return user.password == hashPassword(password)
        }

        private fun hashPassword(pwd: String): String{
            try {
                val md = MessageDigest.getInstance("SHA-256")
                val hashedBytes = md.digest(pwd.toByteArray())
                return Base64.getEncoder().encodeToString(hashedBytes)
            } catch (e: NoSuchFileException){
                e.printStackTrace()
            }
            return ""
        }
    }
}