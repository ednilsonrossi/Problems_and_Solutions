#include <stdio.h>

int main(){
    // DECLARAÇÃO DE VARIÁVEIS   
    int horas_uso;
    int pacotes;
    int horas_avulso;
    float valor_pagar;

    //ENTRADA DE DADOS
    printf("Digite quantidade de horas de uso da charreto: \n");
    scanf("%d", &horas_uso);

    //PROCESSAMENTO
    pacotes = horas_uso / 3;    //Descobre quantos pacotes existem
    horas_avulso = horas_uso - pacotes * 3;
    //horas_avulso = horas_uso % 3;
    valor_pagar = pacotes * 8.50 + horas_avulso * 3.50;

    //SAÍDA DOS RESULTADOS
    printf("Valor à pagar: R$ %.2f.\n", valor_pagar);

    return 0;
}
