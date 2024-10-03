import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /* Instanciar um objeto da classe Scanner para realizar a leitura de dados. */
        Scanner objScanner = new Scanner(System.in);

        int n;

        /* Estrutura de repetição garante que o valor informado pelo usuário é válido. */
        do{
            System.out.println("Digite N: ");
            n = objScanner.nextInt();
        } while (n < 1);

        int counter = 0;
        int index = 1;
        while (counter < n) {
            if (isPrime(index)) {
                System.out.println(index + " é primo.");
                counter += 1;
            }
            index += 1;
        }

    }    


    /**
     * O método estático isPrime() é membro da classe Main, membros de classe serão abordados
     * futuramente na disciplina.
     * 
     * O método isPrime() recebe como argumento um número inteiro e retorna se esse número é
     * ou não primo.
     */
    public static boolean isPrime(int number) {
        boolean prime = true;   // Assume-se que o number é primo, e busca-se contradizer a afirmação.
        int divisor = 2;

        while (divisor <= number/2 && prime) {
            if(number % divisor == 0){
                prime = false;
            }
            divisor++;
        }
        
        return prime;
    }
}