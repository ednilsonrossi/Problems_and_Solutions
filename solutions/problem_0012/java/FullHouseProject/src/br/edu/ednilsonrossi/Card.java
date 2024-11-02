package br.edu.ednilsonrossi;

public class Card {
	public static final char SPADES = '\u2660';
	public static final char HEARTS = '\u2661';
	public static final char DIAMONDS = '\u2662';
	public static final char CLUBS = '\u2663';
	
	private int value;
	private char suit;
	
	public Card(int value, char suit) {
		if (value < 1 || value > 13) {
			this.value = 0;
		} else {
			this.value = value;
		}
		
		suit = Character.toUpperCase(suit);
		if (suit == 'P') {
			this.suit = CLUBS;
		} else if (suit == 'C') {
			this.suit = HEARTS;
		} else if (suit == 'O') {
			this.suit = DIAMONDS;
		} else if (suit == 'E') {
			this.suit = SPADES;
		} else {
			this.suit = 'X';
			this.value = 0;
		}
	}

	public int getValue() {
		return value;
	}

	public char getSuit() {
		return suit;
	}
	
	@Override
	public String toString() {
		String str;
		if (value == 0) {
			str = "Invalid card.";
		} else {
			str = "";
			if (value >= 2 && value <= 10) {
				str += value;
			} else if (value == 1) {
				str += "A";
			} else if (value == 11) {
				str += "J";
			} else if (value == 12) {
				str += "Q";
			} else if (value == 13) {
				str += "K";
			}
			str += "-" + value; 
		}
		return str;
	}

}
