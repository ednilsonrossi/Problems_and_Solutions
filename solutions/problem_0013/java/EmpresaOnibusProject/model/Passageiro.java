package ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model;

public abstract class Passageiro {

    private String nome;
    protected double tarifa;

    public Passageiro(String nome){
        this.nome = nome;
        tarifa = 0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getTarifa(){
        return this.tarifa;
    }
    
    public abstract double getValorPagamento(double tarifa);

    @Override
    public String toString() {
        return "Passageiro: " + getNome() + "\nPagamento: R$: " + getValorPagamento(tarifa);
    }
}