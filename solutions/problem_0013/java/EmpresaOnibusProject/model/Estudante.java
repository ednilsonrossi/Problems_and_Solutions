package ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model;

public class Estudante extends Passageiro{
    private String ra;
    private String escola;

    public Estudante(String nome, String ra, String escola){
        super(nome);
        this.ra = ra;
        this.escola = escola;
    }

    public String getRa() {
        return ra;
    }

    public void setRa(String ra) {
        this.ra = ra;
    }

    public String getEscola() {
        return escola;
    }

    public void setEscola(String escola) {
        this.escola = escola;
    }

    @Override
    public double getValorPagamento(double tarifa) {
        this.tarifa = tarifa;
        return this.tarifa / 2;
    }

    @Override
    public String toString() {
        return super.toString() + "\nRA: " + ra + "\nEscola: " + escola;
    }
    
}
