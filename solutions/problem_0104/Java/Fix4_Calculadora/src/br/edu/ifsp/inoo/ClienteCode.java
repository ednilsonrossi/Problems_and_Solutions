package br.edu.ifsp.inoo;

public class ClienteCode {

	public static void main(String[] args) {
		
		Calculadora calculadora = new Calculadora(59, 20, "somar");
		System.out.println("Resultado: " + calculadora.calcular());

		calculadora.setOperacao("subtrair");
		System.out.println("Resultado: " + calculadora.calcular());
		
		calculadora.setOperacao("multiplicar");
		System.out.println("Resultado: " + calculadora.calcular());
		
		CalculadoraCientifica cientifica = new CalculadoraCientifica(10, 10, "somar");
		System.out.println("Científica: " + cientifica.calcular());
		
		cientifica.setOperacao("multiplicar");
		System.out.println("Científica: " + cientifica.calcular());
		
		cientifica.setNumero_b(0);
		cientifica.setOperacao("dividir");
		System.out.println("Científica: " + cientifica.calcular());
	}

}
