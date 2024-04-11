#include <stdio.h>

double get_average(double arg_1, double arg_2, double arg_3);
int is_valid(double test_value);

int main(int argc, char const *argv[]){
    
    double test_1, test_2, test_3, average;

    printf("Digite a notas das três provas: \n");
    scanf("%lf%lf%lf", &test_1, &test_2, &test_3);
    /**
     * O caractere marcador de formatação de valores 
     * double é o %lf que representa um long float (
     * float longo) que permite uma precisão maior.
    */

    average = get_average(test_1, test_2, test_3);

    return 0;
}

int is_valid(double test_value){
    /**
     * A função retorna 1 (verdade) caso o valor seja válido.
     * Um valor válido está no intervalo de [0..10]. Caso
     * o valor seja inválido o retorno é zero (falso). 
     * 
     * Observa-se que o retorno é o valor obtido pela própria
     * condiçãom sendo dispensável o uso de uma estrutura
     * condicional neste caso.
    */
    return test_value >= 0 && test_value <= 10;
}

double get_average(double arg_1, double arg_2, double arg_3){
    double reply;

    /**
     * A estrutura condicional abaixo verifica se alguma das três
     * notas informadas como argumento é inválida (NÃO VÁLIDA), de
     * forma que se alguma delas for inválida o resultado da condição
     * será 1, entrando no bloco "então" do if(), atribuindo um valor 
     * negativo para a resposta da função. Caso o resultado da condição
     * seja 0, significa que todos os argumentos são válidos, e o fluxo
     * é desviado para o bloco else calculando a média.
    */
    if(!is_valid(arg_1) || !is_valid(arg_2 || !is_valid(arg_3))){

        reply = -10;
    }else{
        reply = (arg_1 * 2 + arg_2 * 3 + arg_3 * 5) / (2 + 3 + 5);
    }
    return reply;
}