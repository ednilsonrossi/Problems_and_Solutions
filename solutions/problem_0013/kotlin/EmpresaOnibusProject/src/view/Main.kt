package view

import model.Aposentado
import model.Estudante
import model.Passageiro
import model.Regular
import java.util.*

private const val REGULAR = 1
private const val ESTUDANTE = 2
private const val APOSENTADO = 3
private const val PASSAGEM_INTEIRA = 150.0

fun main() {
    val onibus = arrayOfNulls<Passageiro>(40)
    var ocupacao = 0
    var tipo: Int
    var opcao: Int
    var continuar: Int
    var contador: Int

    do {
        println("Escolha\n1. Cadastrar passageiro\n2. Consultar passageiros por tipo\n3. Faturamento bruto\n4. Lucro")
        opcao = readln().toInt()

        when (opcao) {
            1 -> {
                println("Tipo passagem: \n1 - Regular\n2 - Estudante\n3 - Aposentado\n -> ")
                tipo = readln().toInt()
                onibus[ocupacao++] = lerPassageiro(tipo)
            }

            2 -> {
                println("Tipo passagem: \n1 - Regular\n2 - Estudante\n3 - Aposentado\n -> ")
                tipo = readln().toInt()
                contador = 0
                var i = 0
                while (i != ocupacao) {
                    if (tipo == REGULAR && onibus[i] is Regular) {
                        contador += 1
                    }

                    if (tipo == ESTUDANTE && onibus[i] is Estudante) {
                        contador += 1
                    }

                    if (tipo == APOSENTADO && onibus[i] is Aposentado) {
                        contador += 1
                    }
                    i++
                }
                println("Total de passageiros: $contador")
            }

            3 -> {
                var faturamento = 0.0
                var i = 0
                while (i != ocupacao) {
                    faturamento += onibus[i]!!.getValorPagamento()
                    i++
                }
                println("Faturamento bruto com a viagem: R$ $faturamento")
            }

            4 -> {
                var resultado: Double
                println("Custo da viagem: ")
                val custo = readln().toDouble()
                var fatura = 0.0
                var i = 0
                while (i != ocupacao) {
                    fatura += onibus[i]!!.getValorPagamento()
                    i++
                }
                resultado = fatura - custo
                if (resultado > 0) {
                    println("Lucro de R$ $resultado")
                } else {
                    println("Prejuízo de R$ $resultado")
                }
            }
        }
        println("Continuar leitura (1-sim/0-nao): ")
        continuar = readln().toInt()
    } while (continuar == 1)
}

fun lerPassageiro(tipo: Int): Passageiro? {
    val passageiro: Passageiro?
    println("Nome do passageiro: ")
    val nome = readln()
    println("Valor da tarifa inteira: ")
    val tarifaInteira = readln().toDouble()

    when (tipo) {
        REGULAR -> passageiro = Regular(nome, tarifaInteira)
        ESTUDANTE -> {
            println("RA: ")
            val ra = readln()
            println("Escola: ")
            val escola = readln()
            passageiro = Estudante(nome, tarifaInteira, ra, escola)
        }
        APOSENTADO -> {
            println("Ano de nascimento")
            val ano = readln().toInt()
            println("RG: ")
            val rg = readln()
            passageiro = Aposentado(nome, tarifaInteira, rg, ano)
        }
        else -> passageiro = null
    }
    return passageiro
}