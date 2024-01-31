package ExerciciosFixacao.Fixacao4.EmpresaOnibusProject.model;

public class Regular extends Passageiro{
    
    public Regular(String nome){
        super(nome);
    }

    @Override
    public double getValorPagamento(double tarifa) {
        this.tarifa = tarifa;
        return getTarifa();
    }

}
