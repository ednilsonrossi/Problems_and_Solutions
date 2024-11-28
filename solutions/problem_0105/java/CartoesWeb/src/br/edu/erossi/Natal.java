package br.edu.erossi;

public class Natal extends CartaoWeb {
	
	private String mensagem;

	public Natal(String destinatario, String remetente) {
		super(destinatario, remetente);
		mensagem = "Esteja onde estiver, espero que este dia \n"
				+ "seja vivido com muita alegria e que traga muita paz, \n"
				+ "saúde e harmonia para sua vida. Feliz Natal!";
	}

	@Override
	public String getMessage() {
		return mensagem;
	}

}
