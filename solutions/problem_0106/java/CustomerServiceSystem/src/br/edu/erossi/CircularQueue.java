package br.edu.erossi;

public class CircularQueue extends Queue {
	
	private static final int MAXSIZE = 100;
	private Client elements[];
	private int start;
	private int end;
	private int size;
	private int maxsize;

	public CircularQueue() {
		this.maxsize = MAXSIZE;
		init();
	}
	
	public CircularQueue(int size) {
		if (size > 0) {
			this.maxsize = size;
		} else {
			this.maxsize = MAXSIZE;
		}
		init();
	}
	
	@Override
	boolean enqueue(Client client) {
		if (!isFull()) {
			elements[end] = client;
			end += 1;
			if (end == maxsize) {
				end = 0;
			}
			size += 1;
			return true;
		}
		return false;
	}

	@Override
	Client dequeue() {
		Client client = null;
		
		if (isEmpty()) {
			return client;
		} else {
			start += 1;
			if (start == maxsize) {
				start = 0;
			}
			client = elements[start];
			elements[start] = null;
			size -= 1;
			return client;
		}
	}

	@Override
	boolean isFull() {
		return size == maxsize;
	}

	@Override
	boolean isEmpty() {
		return size == 0;
	}

	private void init() {
		this.elements = new Client[this.maxsize];
		this.start = -1;
		this.end = 0;
		this.size = 0;
	}
}
