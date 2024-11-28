package br.edu.erossi;

public abstract class Queue {

	abstract boolean enqueue(Client client);
	
	abstract Client dequeue();
	
	abstract boolean isFull();
	
	abstract boolean isEmpty();
	
}
