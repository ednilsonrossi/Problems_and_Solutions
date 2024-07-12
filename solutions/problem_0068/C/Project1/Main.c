#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int arg);

int main(){
    int input = 0;

    // Utilização de uma estrutura de repetição indeterminada
    // para validar a entrada, nesse exemplo, a repetição é
    // realizada enquanto o usuário não digitar um valor válido.
    while (input < 2){
        printf("Digite número (>1): ");
        scanf("%d", &input);
    }
    
    if(eh_primo(input)){
        printf("%d é primo.\n", input);
    }else {
        printf("%d não é primo.\n", input);
    }

    return 0;
}


bool eh_primo(int arg){
    bool primo = true;
    int divisor = 2;

    // Estrutura de repetição com característica de determinada
    // e indeterminada. Temos que a condição de parada utiliza
    // o divisor como contador, sendo que serão executadas operações
    // de 2 até metade do valor do argumento, por exemplo, se arg
    // for 21, a repetição será de 2 até 10. por outro lado, existe a 
    // condição do primo, que permite a repetição enquando o valor
    // lógico for verdadeiro, assim, se o valor de primo for alterado 
    // para falso a repetição é encerrada.
    while (divisor <= arg/2 && primo) {
        if(arg % divisor == 0){
            primo = false;
        }
        divisor++;
    }
    
    return primo;
}