fun main() {
    var number: Int
    do{
        println("Digite um valor inteiro positivo")
        number = readln().toInt()
    }while (number < 1)

    val friendNumber = sumDivisors(number)
    val sumFriendDivisor = sumDivisors(friendNumber)

    if (number == sumFriendDivisor){
        println("$number e $friendNumber são amigáveis.")
    }else{
        println("$number não possui um número amigável.")
    }
}

fun sumDivisors(number: Int): Int{
    if (number > 1) {
        var sum = 1
        var divisor = 2
        while (divisor < number){
            if(number % divisor == 0){
                sum += divisor
            }
            divisor += 1
        }
        return sum
    }
    return 0
}