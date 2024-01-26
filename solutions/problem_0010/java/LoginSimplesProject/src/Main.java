import dao.UserDao;
import dao.UserDaoImpl;
import model.User;

import java.util.Scanner;

public class Main {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        UserDao dao = UserDaoImpl.getInstance();
        User user;
        String uName, uEmail, uPasswd;
        int mainlyOption;

        do{
            System.out.println("1. NOVO USUÁRIO");
            System.out.println("2. RECUPERAR SENHA");
            System.out.println("3. LOGIN");
            System.out.println("0. FINALIZAR O SISTEMA");
            System.out.print("OPÇÃO DESEJADA: ");
            mainlyOption = scanner.nextInt();
            scanner.nextLine();

            switch (mainlyOption){
                case 1:
                    user = readNewUser();
                    if(dao.insert(user)){
                        System.out.println("USUÁRIO INSERIDO COM SUCESSO");
                    }else{
                        System.out.println("ERRO AO INSERIR O USUÁRIO");
                    }
                    break;

                case 2:
                    System.out.println("** RECUPERAÇÃO DE SENHA **");
                    System.out.println("INFORME NOME DE USUÁRIO: ");
                    uName = scanner.nextLine();
                    System.out.println("INFORME E-MAIL CADASTRADO DO USUÁRIO <" + uName + ">: ");
                    uEmail = scanner.nextLine();
                    user = dao.findByUsername(uName);
                    if (user != null){
                        if(user.getEmail().equals(uEmail)){
                            System.out.println("INFORME NOVO SENHA");
                            user.setPassword(scanner.nextLine());
                            dao.update(user);
                            System.out.println("SENHA ATUALIZADA COM SUCESSO");
                        }else{
                            System.out.println("DADOS INVÁLIDOS");
                        }
                    }else{
                        System.out.println("USUÁRIO NÃO CADASTRADO");
                    }
                    break;

                case 3:
                    System.out.println("** LOGIN **");
                    System.out.println("INFORME NOME DE USUÁRIO: ");
                    uName = scanner.nextLine();
                    System.out.println("INFORME A SENHA:");
                    uPasswd = scanner.nextLine();

                    user = dao.findByUsername(uName);
                    if (User.autenticateUser(user, uPasswd)){
                        System.out.println("LOGIN REALIZADO COM SUCESSO");
                    }else{
                        System.out.println("USUÁRIO NÃO AUTENTICADO");
                    }
            }
        } while (mainlyOption != 0);
    }

    private static User readNewUser(){
        System.out.println("** NOVO USUÁRIO **");
        System.out.println("NOME DE USUÁRIO: ");
        var username = scanner.nextLine();
        System.out.println("ENDEREÇO DE E-MAIL:");
        var email = scanner.nextLine();
        System.out.println("SENHA");
        var passwd = scanner.nextLine();
        return new User(username, email, passwd);
    }


}
