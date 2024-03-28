/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

double soma(int a, int b);
double subtracao(int a, int b);
double produto(int a, int b);
double divisao(int a, int b);
double operacao(int a, int b, char op);

int main(){

    int a, b;
    char op;
    double result;

    printf("Digite um sinal de operação: \n");
    scanf("%c", &op);

    printf("Digite dois número: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    result = operacao(a, b, op);
    printf("%.1lf\n\n", result);


}


double operacao(int a, int b, char op){
    double retorno;
    switch(op)
    {
        case '+': 
            retorno = soma(a, b);
            break;
        case '-': 
            retorno = subtracao(a, b);
            break;
        case '*': 
            retorno = produto(a, b);
            break;
        case '/': 
            retorno = divisao(a, b);
            break;
        default: 
            printf("Operação inválida.\n");
            retorno = 0;
    }
    return retorno;
}

/*
double operacao(int a, int b, char op){

    if (op == '+')
    {
        return soma(a, b);
    }
    else if (op == '-')
    {
        return subtracao(a, b);
    }
    else if (op == '*')
    {
        return produto(a, b);
    }
    else if (op == '/')
    {
        return divisao(a, b);
    }
    else{
        printf("Operação inválida.\n");
        return 0;
    }   
}
*/

double soma(int a, int b){
    return a + b;
}

double subtracao(int a, int b){
    return a - b;
}

double produto(int a, int b){
    return a * b;
}

double divisao(int a, int b){
    if(b == 0){
        printf("Não existe divisão por zero!\n\n");
        return 0;
    }
    return a / b;
}