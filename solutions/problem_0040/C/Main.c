#include <stdio.h>

/* Função realiza a leitura de um inteiro e retorna o valor lido. */
int read_int();

/* Função retorna 1 caso o argumento seja par e retorna zero caso seja impar. */
int is_even(int value);

/* Função retorna a média dos números pares passados como argumento. Caso não
 * existam valores pares o retorno é ZERO. */
float average(int n1, int n2, int n3, int n4);

/* Função retorn a soma dos números pares passados como argumento. */
int sum_evens(int n1, int n2, int n3, int n4);

/* Função retorna a quantidade de números pares passados como argumento. */
int count_evens(int n1, int n2, int n3, int n4);

int main(){
    int a, b, c, d;

    a = read_int();
    b = read_int();
    c = read_int();
    d = read_int();

    if(count_evens(a, b, c, d) == 0){
        printf("Não existe valor par.\n");
    }else{
        printf("MEDIA = %.3f\n", average(a, b, c, d) );
    }

    return 0;
}

int read_int(){
    int value;
    printf("Digite número inteiro: ");
    scanf("%d", &value);
    return value;
}

int is_even(int value){
    return value % 2 == 0;
}

float average(int n1, int n2, int n3, int n4){
    float value = 0;
    int qtd = count_evens(n1, n2, n3, n4);
    if(qtd > 0){
        value = sum_evens(n1, n2, n3, n4) / (qtd * 1.0);
    }
    return value;
}

int sum_evens(int n1, int n2, int n3, int n4){
    int sum = 0;

    if(is_even(n1)){
        sum = sum + n1;
    }

    if(is_even(n2)){
        sum = sum + n2;
    }

    sum = sum + (is_even(n3) ? n3 : 0);

    sum += is_even(n4) ? n4 : 0;

    return sum;
}

int count_evens(int n1, int n2, int n3, int n4){
    int count = 0;
    if(is_even(n1)){
        count++;
    }
    if(is_even(n2)){
        count++;
    }
    if(is_even(n3)){
        count++;
    }
    if(is_even(n4)){
        count++;
    }

    return count;
}

