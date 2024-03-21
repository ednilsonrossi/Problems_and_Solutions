#include <stdio.h>

int obtem_dia(int data_completa);
int obtem_mes(int data_completa);
int obtem_ano(int data_completa);

int main(){
    int data;
    printf("Informe data no formato ddmmaaaa: \n");
    scanf("%d", &data);

    printf("Data: %d/%2d/%d\n", 
        obtem_dia(data),
        obtem_mes(data),
        obtem_ano(data)
    );

    return 0;
}

int obtem_dia(int data_completa){
    return data_completa / 1000000;
}

int obtem_mes(int data_completa){
    data_completa = data_completa - obtem_dia(data_completa) * 1000000;
    return data_completa / 10000;
}
int obtem_ano(int data_completa){
    return data_completa % 10000;
}