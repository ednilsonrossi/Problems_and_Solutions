package model

class Regular(nome: String, inteira: Double) : Passageiro(nome, inteira){

    override fun getValorPagamento(): Double {
        return tarifaInteira
    }

}