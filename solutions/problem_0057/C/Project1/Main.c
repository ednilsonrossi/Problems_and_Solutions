#include <stdio.h>

float maior(float arg1, float arg2);

int main(){
    float n1, n2, n3;

    printf("Digite 3 valores: \n");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("Maior: %f\n\n", 
        maior( maior(n1, n2), n3 )
    );

    return 0;
}

float maior(float arg1, float arg2){
    float maximo = arg2;
    if (arg1 > arg2)
        maximo = arg1;

    return maximo;
}