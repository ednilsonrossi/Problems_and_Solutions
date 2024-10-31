package br.edu.ednilsonrossi;

import java.util.Random;

public class ClientCode {
	

	public static void main(String[] args) {
		final int size = 10; 
		SetOfInteger conjuntoA = new SetOfInteger(size);
		SetOfInteger conjuntoB = new SetOfInteger(size);
		
		loadSet(conjuntoA, size, 100);
		loadSet(conjuntoB, size, 100);
		
		System.out.println("Conjunto A:\n " + conjuntoA);
		System.out.println("Conjunto B:\n " + conjuntoB);
		
		SetOfInteger uniao = conjuntoA.union(conjuntoB);
		System.out.println("União: \n " + uniao);
		
		SetOfInteger interseccao = conjuntoA.intersection(conjuntoB);
		System.out.println("Intersecção: \n " + interseccao);
		
		SetOfInteger diferenca = conjuntoB.diference(conjuntoA);
		System.out.println("Diferença: \n " + diferenca);
		
	}

	private static void loadSet(SetOfInteger set, int size, int endInterval) {
		Random random = new Random();
		
		for (int i = 0; i < size; i++) {
			set.insert(i, random.nextInt(endInterval) + 1);
		}
	}
}
