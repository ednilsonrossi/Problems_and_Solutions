package br.edu.erossi;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		double a, b, c;
		Triangulo obj;
		
		
		for (int control = 0; control != 5; control += 1) {
			System.out.println("Digite os valores dos 3 lados do triângulo: ");
			a = scanner.nextDouble();
			b = scanner.nextDouble();
			c = scanner.nextDouble();

			/**
			 * Abaixo é instanciado um novo objeto Triangulo e a referência é sempre
			 * realizada para "obj". Como obj pode armazenar apenas uma referência, a 
			 * cada novo triangulo instanciado o triangulo anterior é perdido.
			 */
			obj = new Triangulo(a, b, c);
			
			if (obj.isTriangulo()) {
				if (obj.isEquilatero()) {
					System.out.println("Triângulo Equilátero.");
				} else if (obj.isIsosceles()) {
					System.out.println("Triângulo Isosceles.");
				} else if (obj.isEscaleno()) {
					System.out.println("Triângulo Escaleno");
				}
			} else {
				System.out.println("Dados não formam triângulo.");
			}
			
			/* Implementação alternativa usando a String fornecida pelo método getTipo(). */
			System.out.println(obj.getTipo());
		}
		
		
		
		scanner.close();
	}
}
