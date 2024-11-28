package br.edu.erossi;

public class Professor extends CartaoWeb {

	public Professor(String destinatario, String remetente) {
		super(destinatario, remetente);
	}

	@Override
	public String getMessage() {
		return "Educar é ser um artesão da personalidade, \n"
				+ "um poeta da inteligência, um semeador \n"
				+ "de ideias. (Augusto Cury)\n "
				+ "Feliz dia dos professores.";
	}
	
	

}
