package model

class Aposentado(nome: String, inteira: Double, val rg: String, var anoNascimento: Int) : Passageiro(nome, inteira) {
    init {
        if (anoNascimento < 1900)
            anoNascimento = 2000;
    }

    override fun getValorPagamento(): Double {
        return 0.0
    }

    override fun toString(): String {
        return "${super.toString()}\nRG: $rg \nNascido(a) em: $anoNascimento"
    }
}