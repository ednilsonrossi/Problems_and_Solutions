fun main() {
    println("Informe os dois valores dos lados da figura: ")
    val sideA = readln().toInt()
    val sideB = readln().toInt()

    if (sideA == sideB)
        println("A figura é um quadrado.")
    else
        println("A figura é um retângulo")
}