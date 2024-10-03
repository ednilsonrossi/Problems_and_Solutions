package br.edu.erossi;

public class Main {

	public static void main(String[] args) {
		
		Dado dado1, dado2;
		int jogada, totalLances = 0;

		dado1 = new Dado();
		dado2 = new Dado();
		
		for (int contador = 0; contador < 3; contador++) {
			dado1.jogar();
			dado2.jogar();
			System.out.println("Rodada " + (contador + 1));
			System.out.println("Dado 1: " + dado1.getFace());
			System.out.println("Dado 2: " + dado2.getFace());
			jogada = dado1.getFace() + dado2.getFace();
			totalLances += jogada;
		}
		System.out.println("Soma de todos os lances: " + totalLances);
	}

}
