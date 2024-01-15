fun main() {
    println("Digite valor: ")
    val input: Int = readln().toInt()

    println("$input! = ${factorial(input)}")
}

fun factorial(number: Int): Long{
    var factorial: Long = 1L
    for (n in number downTo 2){
        factorial *= n.toLong()
    }
    return factorial
}