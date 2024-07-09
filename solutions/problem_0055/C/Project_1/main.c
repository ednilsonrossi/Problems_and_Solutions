/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */


#include <stdio.h>
#include <stdbool.h>

/*
 * Para este exemplo considera-se que uma data é válida se 
 * os dias estão no intervalo de 1 a 31 e o mês está no 
 * intervalo de 1 a 12. 
 **/
bool data_valida(int dia, int mes);

/*
 * Retorna os dois primeiros dígitos de uma data, ou seja,
 * retorno o dia de uma data com 4 dígitos no formato DDMM.]
 **/
int extrair_dia(int ddmm);

/*
 * Retorna o mês de uma data no formato DDMM.
 */
int extrair_mes(int ddmm);

void zodiaco(int dia, int mes);

int main(int argc, char const *argv[]){
    int data, dia, mes;
    printf("Informe data no formato DDMM: ");
    scanf("%d", &data);

    dia = extrair_dia(data);
    mes = extrair_mes(data);

    if(! data_valida(dia, mes)){
        printf("Data digitada é inválida!\n");
    } else {
        zodiaco(dia, mes);
    }

    return 0;
}


int extrair_dia(int ddmm){
    return ddmm / 100;
}

int extrair_mes(int ddmm){
    return ddmm % 100;
}

bool data_valida(int dia, int mes){
    bool result;

    result = dia >= 1 && dia <= 31;
    result = result && mes >= 1 && mes <= 12;

    return result;
}

void zodiaco(int dia, int mes){
    printf("Nascimento em %d/%d indica signo: ", dia, mes);
    if ( (dia >= 21 && mes == 1) || (dia <= 19 && mes == 2) ){
        printf("Aquário\n");
    } else if( (dia >= 20 && mes == 2) || (dia <= 20 && mes == 3) ){
        printf("Peixes\n");
    } else if( (dia >= 21 && mes == 3) || (dia <= 20 && mes == 4) ){
        printf("Áries\n");
    } else if( (dia >= 21 && mes == 4) || (dia <= 20 && mes == 5) ){
        printf("Touro\n");
    } else if( (dia >= 21 && mes == 5) || (dia <= 20 && mes == 6) ){
        printf("Gêmeos\n");
    } else if( (dia >= 21 && mes == 6) || (dia <= 21 && mes == 7) ){
        printf("Câncer\n");
    } else if( (dia >= 22 && mes == 7) || (dia <= 22 && mes == 8) ){
        printf("Leão\n");
    } else if( (dia >= 23 && mes == 8) || (dia <= 22 && mes == 9) ){
        printf("Virgem\n");
    } else if( (dia >= 23 && mes == 9) || (dia <= 22 && mes == 10) ){
        printf("Libra\n");
    } else if( (dia >= 23 && mes == 10) || (dia <= 21 && mes == 11) ){
        printf("Escorpião\n");
    } else if( (dia >= 22 && mes == 11) || (dia <= 21 && mes == 12) ){
        printf("Sagitário\n");
    } else if( (dia >= 22 && mes == 12) || (dia <= 20 && mes == 1) ){
        printf("Capricórnio\n");
    }
}