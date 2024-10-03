class Floyd (private var lines: Int = 1, var symbol: Char = '#'){

    init {
        if (lines < 1){
            lines = 1
        }
    }


    fun printTriangule(numbers: Boolean = true){
        if (numbers)
            printTrianguleWithNumbers()
        else
            printTrianguleWithCharacter()
    }

    private fun printTrianguleWithNumbers(){
        var value = 1
        for (line in 1..lines){
            for (column in 1..line){
                print("$value ")
                value++
            }
            println()
        }
    }

    private fun printTrianguleWithCharacter(){
        for (line in 1..lines){
            for (column in 1..line){
                print("$symbol")
            }
            println()
        }
    }
}

fun main() {
    val floyd = Floyd(4, '&')
    val floyd_default = Floyd()

   println("Com números:")
   floyd.printTriangule(true)

   println("Com números:")
   floyd.printTriangule()

    println("Com Caractere:")
    floyd.printTriangule(false)

    floyd.symbol = '@'
    floyd.printTriangule(false)

    floyd.symbol = '$'
    floyd.printTriangule(false)
}