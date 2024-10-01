import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
            Scanner myScanner = new Scanner(System.in);
            int linhas;
    
            do{
                System.out.print("Qunatidade de linhas: ");
                linhas = myScanner.nextInt();
            }while(linhas <= 0);
    
            int num = 1;
            for(int lin = 1; lin <= linhas; lin += 1){
                for(int j = 0; j < lin; j += 1){
                    System.out.printf("%d ", num);
                    num += 1;
                }
                System.out.println();
            }
        }

}