package model

class USMoney(var dollars: Int = 0, var cents: Int = 0) {
    init {
        if(dollars < 0 || cents < 0){
            dollars = 0
            cents = 0
        }
    }

    init {
        if (cents > 99){
            dollars += cents / 100
            cents %= 100
        }
    }

    fun plus(other: USMoney) = USMoney(this.dollars + other.dollars, this.cents + other.cents)

    override fun toString(): String {
        return "U\$ $dollars.$cents"
    }
}

fun main() {
    val x = USMoney(5, 80)
    val y = USMoney(1, 90)
    val sum = x.plus(y)
    println("${x.toString()} + ${y.toString()} = ${sum.toString()}")


}