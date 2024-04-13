package view;

import model.Rational;

import java.util.Scanner;

public class AverageRationalViewImpl implements AverageRationalView{
    private final Scanner scanner;

    public AverageRationalViewImpl() {
        scanner = new Scanner(System.in);
    }

    @Override
    public void showRational(String message, Rational rational) {
        System.out.print(message);
        System.out.println(rational.toString());
    }

    @Override
    public Rational readRational() {
        int n, d;
        System.out.println("Digite numerador e denominador: ");
        n = scanner.nextInt();
        d = scanner.nextInt();
        return Rational.of(n, d);
    }

    @Override
    public boolean finishReading() {
        System.out.println("Finalizar a leitura? (1 - SIM | 0 - NÃO): ");
        int answer;
        answer = scanner.nextInt();
        return answer == 1;
    }
}
