/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

int distance(int start, int end);
float average_fuel(int start_route, int end_route, float liters);
float profit(float fuel_value, float liters, float amount_received);

int main(){

    int odometer_start, odometer_end;
    float fuel;
    float amount;

    printf("Odometro início: ");
    scanf("%d", &odometer_start);
    printf("Odometro final.: ");
    scanf("%d", &odometer_end);
    printf("Consumo de combustível: ");
    scanf("%f", &fuel);
    printf("Valor recebido no dia: R$ ");
    scanf("%f", &amount);

    printf("Média de consumo: %.2f KM/L\n", average_fuel(odometer_start, odometer_end, fuel));
    printf("Lucro do dia: R$%.2f\n", profit(3.82, fuel, amount));
    
    return 0;
}

int distance(int start, int end){
    return end - start;
}

float average_fuel(int start_route, int end_route, float liters){
    return distance(start_route, end_route) / liters;
}

float profit(float fuel_value, float liters, float amount_received){
    return amount_received - fuel_value * liters;
}