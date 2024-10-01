import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
        int n;

        System.out.println("Tamanho do conjunto: ");
        n = myScanner.nextInt();

        int counter = 0;
        double number, max = 0.0;
        for (int index = 0; index < n; index += 1) {
            System.out.println("Número: ");
            number = myScanner.nextDouble();

            if (index == 0) {
                max = number;
                counter = 1;
            } else {
                if (number == max) {
                    counter += 1;
                } else if (number > max) {
                    max = number;
                    counter = 1;
                }
            }
        }
        System.out.println("Maior: " + max);
        System.out.println("Vezes digitadas: " + counter);
    }
}
