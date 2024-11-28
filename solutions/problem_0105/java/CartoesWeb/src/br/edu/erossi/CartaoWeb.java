package br.edu.erossi;

public abstract class CartaoWeb {

	private String destinatario;
	private String remetente;
	
	public CartaoWeb(String destinatario, String remetente) {
		this.destinatario = destinatario;
		this.remetente = remetente;
	}
	
	public String showMessage() {
		String str = destinatario + ", \n";
		str = str + getMessage() + "\n";
		str = str + remetente;
		
		return str;
	}
	
	public abstract String getMessage();
	
}
