package br.edu.erossi;

public class Client {
	private static int LAST_TICKET = 1;
	
	private int ticketNumber;
	private boolean isPriority;
	
	public Client() {
		updateLastTicket();
		ticketNumber = LAST_TICKET;
		isPriority = false;
	}
	
	public Client(boolean isPriority) {
		this();
		this.isPriority = isPriority;
	}
	
	@Override
	public String toString() {
		String str;
		if(isPriority) {
			str = "P-";
		} else {
			str = "C-";
		}
		if (ticketNumber < 10) {
			str += "00" + getTicketNumber();
		} else if (ticketNumber < 100) {
			str += "0" + getTicketNumber();
		} else {
			str += getTicketNumber();
		}
		return str;
	}
	
	public int getTicketNumber() {
		return ticketNumber;
	}

	public boolean isPriority() {
		return isPriority;
	}

	private void updateLastTicket() {
		LAST_TICKET += 1;
	}
}
