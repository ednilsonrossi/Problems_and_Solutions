/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

float read_total_account();
int carlos_payment(float total);
int andre_payment(float total);
float felipe_payment(float total);

int main(){
    
    float account;

    account = read_total_account();

    printf("Carlos.: R$ %d.00\n", carlos_payment(account));
    printf("Andre..: R$ %d.00\n", andre_payment(account));
    printf("Felipe.: R$ %.2f\n", felipe_payment(account));

    return 0;
}

float read_total_account(){
    float count;
    printf("Digite total conta: \n");
    scanf("%f", &count);
    return count;
}

int carlos_payment(float total){
    return total / 3;
}

int andre_payment(float total){
    return carlos_payment(total);
}

float felipe_payment(float total){
    return total - 2 * carlos_payment(total);
}
