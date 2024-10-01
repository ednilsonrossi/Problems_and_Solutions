/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number;
        double sum = 0.0;

        for (int i = 0; i < 10; i++) {
            System.out.println("Digite número: ");
            number = scanner.nextDouble();

            sum += number;
        }

        System.out.println("Média dos valores lidos: " + sum / 10.0);
    }

}
