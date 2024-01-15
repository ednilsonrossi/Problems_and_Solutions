fun main() {
    println("Informa a quantidade de valores: ")
    val n: Int = readln().toInt()

    var number: Int
    var max: Int = 0
    var min: Int = 0
    for(index in 1..n){
        print("Digite valor: ")
        number = readln().toInt()

        when {
            number < 0 -> {
                if (max == 0){
                    max = number
                }else{
                    if (number > max){
                        max = number
                    }
                }
            }

            number > 0 -> {
                if(min == 0){
                    min = number
                }else{
                    if (number < min){
                        min = number
                    }
                }
            }

        }
    }

    println("Maior valor negativo: $max")
    println("Menor valor positivo: $min")
}