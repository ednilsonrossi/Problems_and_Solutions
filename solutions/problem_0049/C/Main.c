#include <stdio.h>

float maximo(float arg_1, float arg_2);

int main(int argc, char const *argv[]){
    float valueA, valueB;

    printf("Digite dois valores: ");
    scanf("%f%f", &valueA, &valueB);

    printf("Maior valor: %.2f\n", maximo(valueA, valueB));

    return 0;
}

float maximo(float arg_1, float arg_2){
    int response = arg_1;
    if(arg_2 > arg_1){
        response = arg_2;
    }
    return response;
}

