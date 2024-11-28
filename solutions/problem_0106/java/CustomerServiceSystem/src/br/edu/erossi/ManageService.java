package br.edu.erossi;

public class ManageService {
	
	private Queue defaultQueue;
	private Queue priorityQueue;

	
	public ManageService() {
		defaultQueue = new CircularQueue(20);
		priorityQueue = new CircularQueue(10);
	}
	
	public String includeClient(boolean isPriority) {
		String str;
		Client client = new Client(isPriority);
		if (client.isPriority()) {
			str = insert(priorityQueue, client, "prioritária");
		} else {
			str = insert(defaultQueue, client, "normal");
		}
		return str;
	}
	
	public String callClient(Counter counter) {
		Client client = null;
		Queue queue;
		
		if (counter instanceof PriorityCounter) {
			queue = priorityQueue;
			if (queue.isEmpty()) {
				queue = defaultQueue;
			}
		} else {
			queue = defaultQueue;
		}
		
		client = queue.dequeue();
		if ( client != null ) {
			return String.format("Senha : %s\ndirija-se ao\nCaixa n.º %d.\n", client.toString(), counter.getNumber());
		} else {
			return "Não existem clientes na fila.";
		}
	}
	
	private String insert(Queue queue, Client client, String queueName) {
		if (queue.enqueue(client)) {
			return "Senha: " + client.toString();
		} else {
			return "Não há espaço na fila " + queueName + ". Volte mais tarde.";
		}
	}
}
