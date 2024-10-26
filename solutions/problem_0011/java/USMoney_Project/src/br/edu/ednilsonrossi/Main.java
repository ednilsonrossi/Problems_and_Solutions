package br.edu.ednilsonrossi;

public class Main {

	public static void main(String[] args) {
		
		USMoney a = new USMoney(10, 35);
		System.out.println(a.getUSMoney());
		
		USMoney b = new USMoney(10);
		System.out.println(b.getUSMoney());
		
		USMoney c = a.plus(b);
		System.out.println(c.getUSMoney());

	}

}
