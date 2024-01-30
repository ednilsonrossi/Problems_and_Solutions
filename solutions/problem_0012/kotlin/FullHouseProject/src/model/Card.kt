package model

class Card(var cardValue: Int, val suit: Suit) {
    init {
        if (cardValue !in 1..13){
            cardValue = 0
        }
    }

    override fun toString(): String {
        return if (cardValue > 0) {
            when (cardValue) {
                in 2..10 -> "${suit.charCode} $cardValue"
                1 -> "${suit.charCode} A"
                11 -> "${suit.charCode} J"
                12 -> "${suit.charCode} Q"
                13 -> "${suit.charCode} A"
                else -> "${suit.charCode} $cardValue"
            }
        } else
            "Invalid Card"
    }
}