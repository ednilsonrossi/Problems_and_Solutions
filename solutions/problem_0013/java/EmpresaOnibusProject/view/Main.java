package ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.view;

import java.util.Scanner;

import ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model.Aposentado;
import ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model.Estudante;
import ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model.Passageiro;
import ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model.Regular;

public class Main {
    private static final int REGULAR = 1;
    private static final int ESTUDANTE = 2;
    private static final int APOSENTADO = 3;
    private static final double PASSAGEM_INTEIRA = 150.0;


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Passageiro onibus[] = new Passageiro[40];
        int ocupacao = 0;
        int tipo, opcao, continuar, contador;

        do{
            System.out.println("Escolha\n1. Cadastrar passageiro\n2. Consultar passageiros por tipo\n3. Faturamento bruto\n4. Lucro");
            opcao = input.nextInt();

            switch(opcao){
                case 1:
                    System.out.println("Tipo passagem: \n1 - Regular\n2 - Estudante\n3 - Aposentado\n -> ");
                    tipo = input.nextInt();
                    onibus[ocupacao++] = lerPassageiro(tipo);
                    break;

                case 2:
                    System.out.println("Tipo passagem: \n1 - Regular\n2 - Estudante\n3 - Aposentado\n -> ");
                    tipo = input.nextInt();
                    contador = 0;
                    for(int i = 0; i != ocupacao; i++){
                        if(tipo == REGULAR && onibus[i] instanceof Regular){
                            contador += 1;
                        }

                        if(tipo == ESTUDANTE && onibus[i] instanceof Estudante){
                            contador += 1;
                        }

                        if(tipo == APOSENTADO && onibus[i] instanceof Aposentado){
                            contador += 1;
                        }
                    }                
                    System.out.println("Total de passageiros: " + contador);
                    break;

                case 3:
                    double faturamento = 0;
                    for(int i=0; i != ocupacao; i++){
                        faturamento += onibus[i].getValorPagamento(PASSAGEM_INTEIRA);
                    }
                    System.out.println("Faturamento bruto com a viagem: R$ " + faturamento);
                    break;

                case 4:
                    double custo, fatura, resultado;
                    System.out.println("Custo da viagem: ");
                    custo = input.nextDouble();
                    fatura = 0;
                    for(int i = 0; i != ocupacao; i++){
                        fatura += onibus[i].getValorPagamento(PASSAGEM_INTEIRA);
                    }
                    resultado = fatura - custo;
                    if(resultado > 0){
                        System.out.println("Lucro de R$ " + resultado);
                    }else{
                        System.out.println("Prejuízo de R$ " + resultado);
                    }
            }

            System.out.println("Continuar leitura (1-sim/0-nao): ");
            continuar = input.nextInt();
        }while(continuar == 1);
    }

    public static Passageiro lerPassageiro(int tipo){
        Scanner input = new Scanner(System.in);
        Passageiro passageiro;

        String nome;
        System.out.println("Nome do passageiro: ");
        nome = input.next();

        switch(tipo){
            case REGULAR:
                passageiro = new Regular(nome);
                break;

            case ESTUDANTE:
                System.out.println("RA: ");
                String ra = input.next();
                System.out.println("Escola: ");
                String escola = input.next();
                passageiro = new Estudante(nome, ra, escola);
                break;

            case APOSENTADO:
                System.out.println("Ano de nascimento");
                int ano = input.nextInt();
                System.out.println("RG: ");
                String rg = input.next();
                passageiro = new Aposentado(nome, ano, rg);
                break;

            default:
                passageiro = null;
        }

        return passageiro;
    }

}
