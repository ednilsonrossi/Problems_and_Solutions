fun main() {

    println("Infome o comprimento dos três lados: ")
    val ladoA: Double = readln().toDouble()
    val ladoB: Double = readln().toDouble()
    val ladoC: Double = readln().toDouble()

    if (isTriangle(ladoA, ladoB, ladoC)){
        val type: String = if (isEquilateral(ladoA, ladoB, ladoC))
            "equilatero"
        else if (isIsosceles(ladoA, ladoB, ladoC))
            "isósceles"
        else
            "escaleno"

        println("Dados forma um triângulo $type.")
    }else{
        println("Dados não formam um triângulo.")
    }
}

/**
 * Para ser triângulo, a soma de dois lados deve ser maior que o outro lado.
 */
fun isTriangle(a: Double, b: Double, c: Double) = (a + b > c) && (a + c > b ) && (b + c > a)

/**
 * Triângulo equilatero possui três lados iguais
 */
fun isEquilateral(a: Double, b: Double, c: Double) = (a == b) && (a == c)

/**
 * Triângulo isósceles possui dois lados iguais. Todo triângulo equilátero é isósceles.
 */
fun isIsosceles(a: Double, b: Double, c: Double) = (a == b) || (a == c) || (a == c)

/**
 * Triângulo escaleno possui três lados diferentes.
 */
fun isScalene(a: Double, b: Double, c: Double) = (a != b) && (a != c) && (b != c)
