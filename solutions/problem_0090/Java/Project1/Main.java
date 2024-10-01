import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int max = 0, min = 0, number;

        for (int index = 0; index < 20; index++) {
            System.out.print("Digite número: ");
            number = scanner.nextInt();
            if (index == 0) {
                max = min = number;
            } else {
                if (number < min) {
                    min = number;
                }

                if (number > max) {
                    max = number;
                }
            }
        }

        System.out.println("Maior lido: " + max);
        System.out.println("Menor lido: " + min);

        scanner.close();
    }

}
