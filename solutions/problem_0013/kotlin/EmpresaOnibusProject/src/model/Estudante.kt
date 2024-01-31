package model

class Estudante constructor(nome: String, inteira: Double, val ra: String, val escola: String) : Passageiro(nome, inteira) {

    override fun getValorPagamento(): Double {
        return tarifaInteira / 2
    }

    override fun toString(): String {
        return "${super.toString()}\nRA: $ra \nEscola: $escola"
    }
}