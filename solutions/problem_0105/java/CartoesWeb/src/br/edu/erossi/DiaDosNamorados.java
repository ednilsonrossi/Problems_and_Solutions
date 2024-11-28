package br.edu.erossi;

public class DiaDosNamorados extends CartaoWeb{

	private String mensagem;

	public DiaDosNamorados(String destinatario, String remetente) {
		super(destinatario, remetente);
		mensagem = "Feliz Dia dos Namorados! \n";
        mensagem += "Espero que esse tenha sido o único cartão do dia dos ";
        mensagem += "namorados que tenha ganhado nessa data! ;-) \n";
        mensagem += "De todo meu coração,";
	}

	@Override
	public String getMessage() {
		return mensagem;
	}
	
	public void falouMiguel() { }
	
}
