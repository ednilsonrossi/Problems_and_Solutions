import dao.UserDao
import dao.UserDaoImpl
import model.User


fun main() {
    val dao = UserDaoImpl
    var user: User?
    var uName: String
    var uEmail: String
    var uPasswd: String
    var mainlyOption: Int

    do {
        println("1. NOVO USUÁRIO")
        println("2. RECUPERAR SENHA")
        println("3. LOGIN")
        println("0. FINALIZAR O SISTEMA")
        print("OPÇÃO DESEJADA: ")
        mainlyOption = readln().toInt()

        when (mainlyOption) {
            1 -> {
                user = readNewUser()
                if (dao.insert(user)) {
                    println("USUÁRIO INSERIDO COM SUCESSO")
                } else {
                    println("ERRO AO INSERIR O USUÁRIO")
                }
            }

            2 -> {
                println("** RECUPERAÇÃO DE SENHA **")
                println("INFORME NOME DE USUÁRIO: ")
                uName = readln()
                println("INFORME E-MAIL CADASTRADO DO USUÁRIO <$uName>: ")
                uEmail = readln()
                user = dao.findByUsername(uName)
                if (user != null) {
                    if (user.email == uEmail) {
                        println("INFORME NOVO SENHA")
                        user.password = readln()
                        dao.update(user)
                        println("SENHA ATUALIZADA COM SUCESSO")
                    } else {
                        println("DADOS INVÁLIDOS")
                    }
                } else {
                    println("USUÁRIO NÃO CADASTRADO")
                }
            }

            3 -> {
                println("** LOGIN **")
                println("INFORME NOME DE USUÁRIO: ")
                uName = readln()
                println("INFORME A SENHA:")
                uPasswd = readln()

                user = dao.findByUsername(uName)
                if (User.autenticateUser(user?: User("", "", ""), uPasswd)) {
                    println("LOGIN REALIZADO COM SUCESSO")
                } else {
                    println("USUÁRIO NÃO AUTENTICADO")
                }
            }
        }
    } while (mainlyOption != 0)


}

fun readNewUser(): User{
    println("** NOVO USUÁRIO **")
    println("NOME DE USUÁRIO: ")
    val username = readln()
    println("ENDEREÇO DE E-MAIL:")
    val email = readln()
    println("SENHA")
    val passwd = readln()
    return User(username, email, passwd)
}