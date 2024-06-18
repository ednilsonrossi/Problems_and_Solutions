#include <stdio.h>

double taxa_servico(int dias);
void conta_cliente(int dias, double diaria, double tx_servico);

int main(int argc, char const *argv[]){
    int diarias;

    printf("Quantidade de diárias: ");
    scanf("%d", &diarias);

    conta_cliente(diarias, 120, taxa_servico(diarias));

    return 0;
}

double taxa_servico(int dias){
    double valor_taxa;

    if(dias > 15){
        valor_taxa = 5.50;
    } else {
        if(dias == 15){
            valor_taxa = 6.0;
        } else {
            valor_taxa = 8.0;
        }
    }

    /*
     * Nesta versão simplifica-se a estrutura condicional iniciando
     * a variável de retorno com um valor da sequência, dessa forma,
     * não é preciso verificar esse valor. 
    double valor_taxa = 8.0;
    if(dias > 15){
        valor_taxa = 5.50;
    }
    if(dias == 15){
        valor_taxa = 6.0;
    }
    */

    return valor_taxa;
}

void conta_cliente(int dias, double diaria, double tx_servico){
    printf("\n ** HOSPEDAGEM **\n\n");
    printf("Diárias..................: %d\n", dias);
    printf("Total da hospedagem......: R$ %7.2f\n", dias * diaria);
    printf("\t(%d x R$%.2f)\n", dias, diaria);
    printf("Total da taxa de serviço.: R$ %7.2f\n", dias * tx_servico);
    printf("\t(%d x R$%.2f)\n\n", dias, tx_servico);
    printf("-----------------------------------\n");
    printf("\nTotal à pagar............: R$ %7.2f\n\n\n", dias * diaria + dias * tx_servico);
}