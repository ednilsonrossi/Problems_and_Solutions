package br.edu.ednilsonrossi;

import java.util.Scanner;

/*
 * No jogo de pôquer, um Full House (ou "Full Hand") é uma mão que consiste em três cartas 
 * de um mesmo valor e duas cartas de outro valor. Essa combinação é uma das mãos mais 
 * fortes no pôquer, superando pares, trincas e sequências, e ficando atrás apenas de mãos 
 * como o Straight Flush (sequência de cartas do mesmo naipe) e a Quadra (quatro cartas do 
 * mesmo valor).
 * 
 * >>> Exemplo de Full House
 * 
 * Um Full House poderia ser representado, por exemplo, como:
 *  - Três Reis e dois Ases: K♠ K♦ K♣ A♠ A♦
 *  - Três Damas e dois Oitos: Q♠ Q♦ Q♣ 8♠ 8♦
 *  
 *  >>> Estrutura de um Full House
 *  
 *  Trio: Três cartas do mesmo valor (por exemplo, três Reis, três Damas, etc.).
 *  Par: Duas cartas de outro valor (por exemplo, dois Ases, dois Oitos, etc.).
 *  
 *  
 *  O Full House é frequentemente descrito como "três de um tipo com um par."
 */
public class FullHouse {

	/*
	 * Uma mão é composta de 5 cartas, aqui representa-se a mão de jogo com um array
	 * de cartas.
	 */
	private Card hand[];

	
	
	public FullHouse() {
		hand = new Card[5];
	}

	private Card readCard() {
		Scanner scanner = new Scanner(System.in);

		int suit;
		do {
			System.out.println("(1). " + Card.CLUBS);
			System.out.println("(2). " + Card.HEARTS);
			System.out.println("(3). " + Card.DIAMONDS);
			System.out.println("(4). " + Card.SPADES);
			System.out.println("Naipe: ");
			suit = scanner.nextInt();
		} while (suit < 1 || suit > 4);

		int value = 0;
		do {
			System.out.println("Valor da carta [1..13]:");
			value = scanner.nextInt();
		} while (value < 1 || value > 13);

		Card card;
		switch (suit) {
		case 1:
			card = new Card(value, 'p');
			break;
		case 2:
			card = new Card(value, 'c');
			break;
		case 3:
			card = new Card(value, 'o');
			break;
		default:
			card = new Card(value, 'e');
		}

		return card;
	}

	private void sort() {
		/*
		 * Algoritmo de classificação utilizado é o InsertSort que insere novos
		 * elementos do conjunto na posição correta. Nessa implementação a classificação
		 * é realizada em função do valor (value) de uma carta (Card).
		 * 
		 * Veja mais sobre InseretSort em:
		 * https://github.com/ednilsonrossi/sin_esdd_2024s2/tree/main/aula2-
		 * classificacao/insertsort
		 */
		Card element;
		int j;
		for (int i = 1; i < hand.length; i++) {
			element = hand[i];

			for (j = i - 1; j >= 0 && hand[j].getValue() > element.getValue(); j--) {
				hand[j + 1] = hand[j];
			}
			hand[j + 1] = element;
		}
	}

	/*
	 * A lógica aplicada para identificar um Full House consiste em verificar a
	 * existência de três cartas com o mesmo valor mais duas cartas com o mesmo
	 * valor, ou seja, o "três de um tipo com um par".
	 */
	private boolean isFullHouse() {
		/*
		 * Para a verificação foi realizada a classificação/ordenação das cartas em
		 * função do valor da carta, o naipe não é relevante para essa verificação.
		 */
		sort();

		/*
		 * Com as cartas da mão classificadas temos que para existir um FULL HOUSE
		 * obrigatoriamente as cartas das pontas devem ser iguais, ou seja, hand[0] deve
		 * ser igual a hand[1] e hand[3] deve ser igual a hand[4]. Com as cartas dos
		 * "cantos" com o mesmo valor, haverá um FULL HOUSE se a carta do meio, hand[2],
		 * for igual a carta da esquerda ou a carta da direita. Assim, aplica-se a
		 * verificação dessas condições para efetivamente indicar um FULL HOUSE.
		 */
		boolean isFullHouse = false;
		if (hand[0].getValue() == hand[1].getValue() && hand[3].getValue() == hand[4].getValue()) {
			isFullHouse = hand[2].getValue() == hand[1].getValue() || hand[2].getValue() == hand[3].getValue();
		}
		return isFullHouse;
	}

	public static void main(String[] args) {

		FullHouse fullHouse = new FullHouse();

		/*
		 * Leitura das 5 cartas. Importante pontuar que o método main() possui acesso
		 * aos membros private da classe FullHouse pois o main() também é membro da
		 * classe FullHouse.
		 */
		System.out.println("Digite 5 cartas: ");
		for (int i = 0; i < 5; i++) {
			fullHouse.hand[i] = fullHouse.readCard();
		}

		if (fullHouse.isFullHouse()) {
			System.out.println("FULL HOUSE");
			for (int i = 0; i < fullHouse.hand.length; i++) {
				System.out.println(fullHouse.hand[i]);
			}
		} else {
			System.out.println("Mais sorte na pŕoxima mão.");
		}
	}

}
