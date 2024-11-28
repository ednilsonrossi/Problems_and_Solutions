package br.edu.erossi;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int continuar;
		int escolha;
		String destinatario, remetente;
		
		/**
		 * O objeto 'cartao' declarado abaixo é a indicação de um
		 * objeto da classe CartaoWeb, contudo essa classe é abstrata
		 * de forma que não é possível instanciar objetos dessa classe.
		 * Contudo, CartaoWeb é superclass de DiaDosNamorados, Natal e
		 * Professores. Como o RELACIONAMENTO DE HERANÇA é definido
		 * como um relacionamento "é um", temos que as classes filhas
		 * podem ser referenciadas em um objeto da superclasse, ou seja,
		 * a classe filha assume a forma da superclasse. Essa 
		 * característica é denominada POLIMORFISMO.
		 */
		CartaoWeb cartao;
		
		do {
			System.out.println("Escolha seu cartão: ");
			System.out.println("1) Dia dos namorados");
			System.out.println("2) Natal");
			System.out.println("3) Dia dos professores");
			System.out.println("Sua escolha: ");
			escolha = scanner.nextInt();
			scanner.nextLine();
			
			System.out.println("Informe destinatário e remetente: ");
			destinatario = scanner.nextLine();
			remetente = scanner.nextLine();
			
			/**
			 * De acordo com a escolha do usuário é instanciado um 
			 * cartao especializado, ou seja, um objeto da subclasse
			 * que representa corretamente a intenção do usuário. 
			 * Pelo POLIMORFISMO todas as subclasses podem ser 
			 * referenciadas como uma superclasse.
			 */
			if (escolha == 1) {
				cartao = new DiaDosNamorados(destinatario, remetente);
			} else if (escolha == 2) {
				cartao = new Natal(destinatario, remetente);
			} else {
				cartao = new Professor(destinatario, remetente);
			}
			
			/**
			 * Todo CartaoWeb possui o método showMessage(), assim é possível
			 * realizar a chamada, independentemente do objeto filho que
			 * foi instanciado.
			 */
			System.out.println(cartao.showMessage());
			
			System.out.println("Deseja Continuar? 1) Sim, 0) Não: ");
			continuar = scanner.nextInt();
		} while (continuar != 0);
		
		scanner.close();
	}

}
