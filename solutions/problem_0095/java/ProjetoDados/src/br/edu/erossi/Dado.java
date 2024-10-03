package br.edu.erossi;

import java.util.Random;

public class Dado {

	private int face;
	private Random random;

	public Dado() {
		random = new Random();
		
		/**
		 * Ao criar / instanciar um dado a face que está 
		 * sendo apresentada é sorteada, assim não existe 
		 * estado inicial definido para o objeto.
		 */
		sortear();
	}

	public void jogar() {
		sortear();
	}

	public int getFace() {
		return face;
	}

	private void sortear() {
		/**
		 * nextInt(6) gera um valor de 0 a 5, que acrescentado
		 * uma unidade resulta em um valor de 1 a 6, ou seja,
		 * as possíveis faces do dado. 
		 */
		face = random.nextInt(6) + 1;
	}

}
