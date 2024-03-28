/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

float average(float, float, float, float, float);
void show_message(float);

int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, n5;


    printf("Digite 5 notas: ");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    show_message( average(n1, n2, n3, n4, n5) );

    return 0;
}

float average(float a, float b, float c, float d, float e){
    return (a + b + c + d + e) / 5;
}

void show_message(float media){

    if(media < 5){
        printf("Estudante está REPROVADO\n\n");
    }else{
        if(media < 7){
            printf("Estudante está de RECUPERAÇÃO\n\n");
        }else{
            printf("Estudante está APROVADO\n\n");
        }
    }

}