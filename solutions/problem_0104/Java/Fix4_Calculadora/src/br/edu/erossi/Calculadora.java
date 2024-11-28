package br.edu.erossi;

public class Calculadora {
	private double numero_a;
	private double numero_b;
	private String operacao;
	
	public Calculadora(double numero_a, double numero_b, String operacao) {
		this.numero_a = numero_a;
		this.numero_b = numero_b;
		this.operacao = operacao;
	}

	public double getNumero_a() {
		return numero_a;
	}

	public void setNumero_a(double numero_a) {
		this.numero_a = numero_a;
	}

	public double getNumero_b() {
		return numero_b;
	}

	public void setNumero_b(double numero_b) {
		this.numero_b = numero_b;
	}

	public String getOperacao() {
		return operacao;
	}

	public void setOperacao(String operacao) {
		this.operacao = operacao;
	}
	
	public double calcular() {
		double resultado;
		if ("somar".equalsIgnoreCase(operacao)) {
			resultado = numero_a + numero_b;
		} else if ("subtrair".equalsIgnoreCase(operacao)) {
			resultado = numero_a - numero_b;
		} else {
			resultado = 0;
			System.out.println("ERRO: Operação inválida");
		}
		return resultado;
	}
	
}


















