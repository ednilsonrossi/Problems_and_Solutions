package br.edu.erossi;

/**
 * Classe abstrata com a especificação dos métodos abstratos de uma 
 * Queue. Pela implementação indicada, a classe seria melhor representada
 * como uma Interface.
 */
public abstract class Queue {

	abstract boolean enqueue(Client client);
	
	abstract Client dequeue();
	
	abstract boolean isFull();
	
	abstract boolean isEmpty();
	
}
