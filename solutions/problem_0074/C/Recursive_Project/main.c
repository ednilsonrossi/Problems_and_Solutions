#include <stdio.h>

int ocurrences_counter(int natural_value, int digit);

int main(){
    int input;      // número natural informado pelo usuário
    int digit;      // dígito que terá as ocorrencias contabilizadas
                    // no número natural

    // Validação da entrada de dados, considera-se apenas
    // valores positivos.
    do{
        printf("Digite valor positivo: ");
        scanf("%d", &input);
    } while(input < 1);

    // Validação do dígito que deve ser de 0 a 9.
    do{
        printf("Dígito a ser contabilizado: ");
        scanf("%d", &digit);
    } while (digit < 0 || digit > 9);

    printf("O digito %d ocorre %d vezes no número natural %d.\n\n",
        digit,
        ocurrences_counter(input, digit),
        input);

    return 0;
}

/**
 * Função recursiva que retorna a quantidade de vezes que o 
 * digit ocorre no natural_value.
 */
int ocurrences_counter(int natural_value, int digit){

    // Caso base: argumento natural_value é zero então
    // retorna zero.
    if(natural_value == 0){
        return 0;
    }

    int bit = natural_value % 10;   // Isolando último dígito do número
    int counter = 0;                // Contador de número, assume apenas os 
                                    // valores 0 e 1
                                
    if (bit == digit){
        counter = 1;
    }
    
    // Chamada recursiva tendendo ao caso base.
    return counter + ocurrences_counter(natural_value / 10, digit);
    
}