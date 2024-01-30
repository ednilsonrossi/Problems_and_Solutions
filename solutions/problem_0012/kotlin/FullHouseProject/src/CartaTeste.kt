import model.Card
import model.Suit

fun main() {
    val hand: MutableList<Card> = mutableListOf()
    println("Digite 5 cartas: ")
    for(i in 0..4){
        hand.add(readCard())
    }

    val sortedHand = hand.sortedBy { it.cardValue }

    val isFullHouse = if(sortedHand[0].cardValue == sortedHand[1].cardValue  && sortedHand[3].cardValue == sortedHand[4].cardValue){
        sortedHand[2].cardValue == sortedHand[1].cardValue || sortedHand[2].cardValue == sortedHand[3].cardValue
    }else{
        false
    }

    if(isFullHouse){
        println("FULL HOUSE")
        for(card in sortedHand){
            println(card.toString())
        }
    }else{
        println("Mais sorte na próxima mão.")
    }
}

fun readCard(): Card{
    var suitMenu = 0
    do {
        println("${Suit.SPADES.charCode} -> 1")
        println("${Suit.HEARTS.charCode} -> 2")
        println("${Suit.DIAMONDS.charCode} -> 3")
        println("${Suit.CLUBS.charCode} -> 4")
        println("NAIPE: ")
        suitMenu = readln().toInt()
    }while (suitMenu !in 1..4)

    var value = 0
    do{
        println("Valor da carta [1..13]: ")
        value = readln().toInt()
    }while (value !in 1..13)

    return when(suitMenu){
        1 -> Card(value, Suit.SPADES)
        2 -> Card(value, Suit.HEARTS)
        3 -> Card(value, Suit.DIAMONDS)
        4 -> Card(value, Suit.CLUBS)
        else -> Card(0, Suit.SPADES)
    }
}
