package view;

import dto.ActorDto;
import dto.MovieDto;

import java.util.List;
import java.util.Scanner;

public class Utils {
    private final static Scanner scanner = new Scanner(System.in);
    private final static String line = "--------------------------------------";

    private Utils(){     }

    public static int readInteger(String msg){
        System.out.println(line);
        System.out.print(msg.toUpperCase());
        return scanner.nextInt();
    }

    public static String selectPerson(List<String> names, PersonType personType){
        String label = personType == PersonType.DIRECTOR ? "DIRETOR" : "ATOR";
        System.out.println(line);
        System.out.println("SELECIONE O " + label + " DESEJADO");
        int i = 1;
        for(String s : names){
            System.out.println("\t" + i + " - " + s);
            i++;
        }
        System.out.println("NÚMERO DO " + label + ": ");
        return names.get(scanner.nextInt() - 1);
    }

    public static MenuOption menu(){
        System.out.println(line);
        System.out.println("MENU PRINCIPAL");
        System.out.println("1 - CADASTRAR FILME");
        System.out.println("2 - LISTAR TODOS FILMES CADASTRADOS");
        System.out.println("3 - LISTAR TODOS OS DIRETORES CADASTRADOS");
        System.out.println("4 - LISTAR TODOS OS ATORES CADASTRADOS");
        System.out.println("5 - LISTAR FILMES POR DIRETOR");
        System.out.println("6 - LISTAR FILMES POR ATOR");
        System.out.println("7 - LISTAR FILMES POR NOTA");

        System.out.println("0 - SAIR DO SISTEMA");
        System.out.println("OPÇÃO DESEJADA:");

        return switch (scanner.nextInt()) {
            case 1 -> MenuOption.CADASTRO;
            case 2 -> MenuOption.LISTAR_TODOS;
            case 3 -> MenuOption.LISTAR_DIRETORES;
            case 4 -> MenuOption.LISTAR_ATORES;
            case 5 -> MenuOption.FILME_POR_DIRETOR;
            case 6 -> MenuOption.FILMES_POR_ATOR;
            case 7 -> MenuOption.FILMES_POR_NOTA;
            default -> MenuOption.SAIR;
        };
    }

    public static MovieDto readMovie(){
        System.out.println(line);
        scanner.nextLine();
        System.out.println("CADASTRO DE FILME");
        System.out.print("TITULO.............: ");
        String title = scanner.nextLine();
        System.out.print("ANO DE LANÇAMENTO..: ");
        int year = scanner.nextInt();
        System.out.print("PONTUAÇÃO..........: ");
        int mark = scanner.nextInt();
        scanner.nextLine();
        System.out.print("DIRETOR..........: ");
        String director = scanner.nextLine();

        var dto = new MovieDto(title, year, mark, director);
        String name;
        do{
            System.out.println("NOME DO ATOR.....: ");
            name = scanner.nextLine();
            if(!name.isEmpty()) {
                System.out.println("ANO DE NASCIMENTO: ");
                int birth = scanner.nextInt();
                scanner.nextLine();
                dto.getActors().add(new ActorDto(name, birth, 0));
                System.out.println("PARA FINALIZAR A LEITURA DEIXE O NOME DO ATOR EM BRANCO.");
            }
        }while (!name.isEmpty());

        return dto;
    }

    public static void showMovie(MovieDto movie){
        System.out.println(line);
        System.out.println("TÍTULO: " + movie.getTitle());
        System.out.println("\tDIRETOR: " + movie.getDirector());
        System.out.println("\tLANÇAMENTO: " + movie.getYear());
        System.out.print("\tNOTA: ");
        for(int i=0; i<movie.getMark(); i++){
            System.out.print("*");
        }
        System.out.println();
        System.out.println("\tELENCO");
        for(ActorDto a : movie.getActors()){
            showActor(a);
        }
        System.out.println(line);
    }

    public static void showActor(ActorDto actor){
        System.out.println("\t\tATOR: " + actor.getName() + " IDADE: " + actor.getAge());
    }

    public static void showMessage(String msg){
        System.out.println();
        System.out.println();
        System.out.println(line);
        System.out.println();
        System.out.println(msg.toUpperCase());
        System.out.println();
        System.out.println(line);
        System.out.println();
        System.out.println();
    }

}
