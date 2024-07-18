#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int arg);
void primos_no_intervalo(int start, int finish);

int main(int argc, char const *argv[]){
    int n1, n2;

    printf("Infome as bordas do intervavo: \n");
    scanf("%d%d", &n1, &n2);

    if(n1 < n2)
        primos_no_intervalo(n1, n2);
    else
        primos_no_intervalo(n2, n1);

    return 0;
}


bool eh_primo(int arg){
    bool primo = true;
    int divisor = 2;

    while (divisor <= arg/2 && primo) {
        if(arg % divisor == 0){
            primo = false;
        }
        divisor++;
    }
    
    return primo;
}

void primos_no_intervalo(int start, int finish){
    printf("Primos: [");
    while (start <= finish)
    {
        if(eh_primo(start)){
            printf("%d ", start);
        }
        start += 1;
    }
    printf("]\n\n");
    
}