package br.edu.ifsp.inoo;

public class CalculadoraCientifica extends Calculadora{
	
	public CalculadoraCientifica(double numero_a, double numero_b, String operacao) {
		super(numero_a, numero_b, operacao);
	}

	@Override
	public double calcular() {
		double calculo = 0;
		if ("multiplicar".equalsIgnoreCase(getOperacao())) {
			calculo = getNumero_a() * getNumero_b();
		} else if ("dividir".equalsIgnoreCase(getOperacao())) {
			if (getNumero_b() == 0) {
				calculo = 0;
				System.out.println("ERRO: Não existe divisão por zero");
			} else {
				calculo = getNumero_a() / getNumero_b();
			}
		} else {
			calculo = super.calcular();
		}
		return calculo;
	}
	
}
