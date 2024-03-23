import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a integer number: ");
        int input = scanner.nextInt();

        MyNumber number = new MyNumber(input);

        System.out.printf("%d, %d, %d, %d, %d\n",
            new MyNumber(number.getPrevious()).getPrevious(),
            number.getPrevious(),
            number.getNumber(),
            number.getNext(),
            new MyNumber(number.getNext()).getNext()
        );
    }
}
