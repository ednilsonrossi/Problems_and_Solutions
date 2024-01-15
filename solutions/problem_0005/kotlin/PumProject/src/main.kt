fun main() {
    println("Informe quantidade de linhas: ")
    val n: Int = readln().toInt()

    if (n > 0){
       var number: Int = 1
       var line: Int = 1
       while(line <= n){
           if (number % 4 != 0)
               print("$number ")
           else {
               println("PUM")
               line++
           }
           number += 1
       }
    }
}