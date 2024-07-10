fun main() {
    var termoA: Int
    var termoB: Int
    var termoC: Int
    var sequencia: Int

    termoA = 0;
    termoB = 1;

    println("1º termo: $termoA")
    println("2º termo: $termoB")

    sequencia = 3
    while (sequencia <= 20){
        termoC = termoA + termoB
        println("${sequencia}º termo: $termoC")

        termoA = termoB
        termoB = termoC
        sequencia += 1
    }
}