package model

abstract class Passageiro (val nome: String, val tarifaInteira: Double){

    abstract fun getValorPagamento(): Double

    override fun toString(): String {
        return "Passageiro: $nome \nPagamentoR\$ ${getValorPagamento()}"
    }
}