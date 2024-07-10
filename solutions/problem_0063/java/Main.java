/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

package Project_PS63.src;


/**
 * Main
 */
public class Main {

    private static final int TERMO_DESEJADO = 20;

    public static void main(String[] args) {
        int termoA, termoB, termoC;
        int sequencia;

        termoA = 0;
        termoB = 1;
        System.out.println("1º termo: " + termoA);
        System.out.println("2º termo: " + termoB);

        sequencia = 3;
        while (sequencia <= TERMO_DESEJADO) {
            termoC = termoA + termoB;
            System.out.printf("%dº termo: %d\n", sequencia, termoC);

            termoA = termoB;
            termoB = termoC;
            sequencia++;
        }
    }
}