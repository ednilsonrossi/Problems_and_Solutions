#include <stdio.h>

int main(){
    int n, input;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);

    int max = 0, min = 0;
    for(int index = 0; index < n; index+= 1){
        printf("Digite valor: ");
        scanf("%d", &input);

        if (input < 0){
            if (max == 0){
                max = input;
            } else {
                if (input > max){
                    max = input;
                }
                
            }
        } 

        if (input > 0){
            if (min == 0){
                min = input;
            } else {
                if (input < min){
                    min = input;
                }
            }
        }
        
    }

    printf("Maior valor negativo: %d\n", max);
    printf("Menor valor positivo: %d\n", min);
    return 0;
}
