#include <stdio.h>

int maximo(int arg_a, int arg_b);
int minimo(int arg_a, int arg_b);
int medio(int arg_a, int arg_b, int arg_c);

int main(){
    
    int n1, n2, n3;

    printf("Informe três números: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("%d, %d, %d\n", 
        minimo(n1, minimo(n2, n3)),
        medio(n1, n2, n3),
        maximo(n1, maximo(n2, n3))
    );

    return 0;
}

int maximo(int arg_a, int arg_b){
    int maior;
    if(arg_a > arg_b){
        maior = arg_a;
    }else{
        maior = arg_b;
    }
    return maior;
}

int minimo(int arg_a, int arg_b){
    int response;
    if(arg_a < arg_b){
        response = arg_a;
    }else{
        response = arg_b;
    }
    return response;
}

int medio(int arg_a, int arg_b, int arg_c){
    int maior, menor, retorno;

    maior = maximo(arg_a, maximo(arg_b, arg_c));
    menor = minimo(arg_a, minimo(arg_b, arg_c));

    if(arg_a != maior){
        if(arg_a != menor){
            retorno = arg_a;
        }
    }

    if(arg_b != maior){
        if(arg_b != menor){
            retorno = arg_b;
        }
    }

    if(arg_c != maior){
        if(arg_c != menor){
            retorno = arg_c;
        }
    }

    return retorno;
}
