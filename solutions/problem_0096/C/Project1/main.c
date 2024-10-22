#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double delta(double a, double b, double c);
void baskara(double a, double b, double c, double *prt_x1, double *ptr_x2, int *ptr_solutions);

int main() {
    double a, b, c;
    double x1, x2;
    int solutions;

    printf("Informe os valores da equação (A, B, C): \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    baskara(a, b, c, &x1, &x2, &solutions);

    if (solutions == 0) {
        printf("Equação não tem soluções conhecidas.");
    } else if (solutions == 1) {
        printf("Solução únida: %lf.", x1);
    } else {
        printf("Raizes \n X1: %lf\n X2: %lf.", x1, x2);
    }

    return 0;
}

/**
 * Função delta() utiliza passagem de parametro por valor, ou seja,
 * os valores são copiados para os argumentos da função. Dentro do 
 * escopo da função as alterações não atingem a variável original.
 */
double delta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

/**
 * Função baskara() utiliza tanto passagem de parametros por valor 
 * como por referência. Os dados da equação A, B e C são passados
 * por valor, porém os dados de retorno X1, X2 e QTDADE SOLUÇÕES
 * são passados por referência para alterar o valor da variável
 * original.
 */
void baskara(double a, double b, double c, double *ptr_x1, double *ptr_x2, int *ptr_solutions) {
    double delt = delta(a, b, c);

    if (delt < 0) {
        *ptr_solutions = 0;
    } else if (delt == 0) {
        *ptr_x1 = -b / (2 * a);
        *ptr_x2 = *ptr_x1;
        *ptr_solutions = 1;
    } else {
        *ptr_x1 = (-b + sqrt(delt) ) / (2 * a);
        *ptr_x2 = (-b - sqrt(delt) ) / (2 * a);
        *ptr_solutions = 2;
    }
}