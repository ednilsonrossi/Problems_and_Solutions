class Calculadora {

    fun soma(arg1: Int, arg2: Int) = arg1 + arg2

    fun multiplicacao(arg1: Int, arg2: Int) = sucessiveSum(arg1, arg2)

    private fun sucessiveSum(base: Int, multiplier: Int): Int{
        var result = 0
        for (i in (1..multiplier)){
            result += base
        }
        return result
    }
}

fun main() {
    val calc = Calculadora()
    val a = 5
    val b = 8

    println("$a + $b = ${calc.soma(a, b)}")
    println("$a x $b = ${calc.multiplicacao(a, b)}")
}