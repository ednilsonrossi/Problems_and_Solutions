package br.edu.erossi;

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
			/**
			 * Neste ponto temos que as operações adicionadas pela classe CalculadoraCientífica
			 * não foram encontradas, então, delega-se à superclasse a responsabilidade de 
			 * realizar a operação ou gerar o erro.
			 */
			calculo = super.calcular();
		}
		return calculo;
	}
	
}
