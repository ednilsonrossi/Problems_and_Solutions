package br.edu.erossi;

public class Triangulo {
	private double lado1;
	private double lado2;
	private double lado3;

	public Triangulo(double lado1, double lado2, double lado3) {
		this.lado1 = lado1;
		this.lado2 = lado2;
		this.lado3 = lado3;
	}

	public boolean isTriangulo() {
		if (lado1 + lado2 > lado3) {
			if (lado2 + lado3 > lado1) {
				if (lado1 + lado3 > lado2) {
					return true;
				}
			}
		}
		return false;
	}

	public boolean isEquilatero() {
		return lado1 == lado2 && lado2 == lado3;
	}

	public boolean isIsosceles() {
		return lado1 == lado2 || lado1 == lado3 || lado2 == lado3;
	}

	public boolean isEscaleno() {
		return lado1 != lado2 && lado2 != lado3 && lado1 != lado3;
	}
	
	/**
	 * Método getTipo() retorna um String com o tipo do triângulo 
	 * formado ou a mensagem que não é possível formar um triângulo.
	 * 
	 * 
	 * @return
	 */
	public String getTipo() {
		String resposta = "Triângulo ";
		if (isEquilatero()) {
			resposta += "Equilátero.";
		} else if (isEscaleno()) {
			resposta += "Escaleno.";
		} else if (isIsosceles()) {
			resposta += "Isosceles.";
		}
		if (!isTriangulo()) {
			resposta = "Não forma um triângulo.";
		}
		return resposta;
	}
}
