int main(int argc, char const *argv[])
{
    int sideA, sideB;

    printf("Informe os dois valores dos lados da figura: \n");
    scanf("%d%d", &sideA, &sideB);

    if (sideA == sideB)
        printf("A figura é um quadrado.\n");
    else
        printf("A figura é um retângulo.\n");

    return 0;
}
