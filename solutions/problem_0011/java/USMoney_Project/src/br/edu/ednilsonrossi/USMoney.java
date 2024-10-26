package br.edu.ednilsonrossi;

public class USMoney {
	private int dollar;
	private int cents;
	
	public USMoney() {
		this(0);
	}
	
	public USMoney(int dollar) {
		this(dollar, 0);
	}
	
	public USMoney(int dollar, int cents) { 
		this.dollar = dollar;
		this.cents = cents;
		if (this.cents > 99) {
			dollar = this.cents / 100;
			this.cents = this.cents % 100;
			this.dollar += dollar;
		}
	}
	
	public USMoney plus(USMoney money) {
		USMoney value = new USMoney(this.dollar + money.dollar, 
							this.cents + money.cents);
		return value;
	}
	
	public String getUSMoney() {
		if (this.cents < 10) {
			return "U$ " + this.dollar + ".0" + this.cents;
		} 
		return "U$ " + this.dollar + "." + this.cents;
	}
	
}



















