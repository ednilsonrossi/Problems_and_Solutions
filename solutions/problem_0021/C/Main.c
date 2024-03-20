#include <stdio.h>

int main(){
    
    float diaria;
    float diaria_promocional, renda_normal, renda_promocao;
    int lotacao;


    printf("Valor da diária: \n");
    scanf("%f", &diaria);

    diaria_promocional = diaria * 0.78;
    printf("DIARIA PROMOCIONAL..: R$%8.2f\n", diaria_promocional);
    
    lotacao = 40;
    renda_normal = (42 * lotacao / 100) * diaria * 8; //8 significa sabado e domingo x 4 semanas
    printf("RENDA SEM PROMOÇÃO..: R$%8.2f\n", renda_normal);

    lotacao = 70;
    renda_promocao = (42 * lotacao / 100) * diaria_promocional * 8;
    printf("RENDA COM PROMOÇÃO..: R$%8.2f\n", renda_promocao);
    
    
    printf("LUCRO COM A PROMOÇÃO: R$%8.2f\n\n", renda_promocao - renda_normal );

    return 0;
}
