package ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model;

public class Aposentado extends Passageiro{
    private int anoNascimento;
    private String rg;

    public Aposentado(String nome, int anoNascimento, String rg){
        super(nome);
        if(anoNascimento > 1900){
            this.anoNascimento = anoNascimento;
        }else{
            this.anoNascimento = 2000;
        }
        this.rg = rg;
    }

    public int getAnoNascimento() {
        return anoNascimento;
    }

    public void setAnoNascimento(int anoNascimento) {
        this.anoNascimento = anoNascimento;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    @Override
    public double getValorPagamento(double tarifa) {
        this.tarifa = tarifa;
        return 0;
    }

    @Override
    public String toString() {
        return super.toString() + "\nNascimento: " + anoNascimento + "\nRG: " + rg;
    }

    
}
