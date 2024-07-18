#include <stdio.h>

float calcula_percentual(int votos_recebidos, int total_votos);
void imprime_relatorio(char nome[64], int votos_recebidos, int total_votos);

int main(int argc, char const *argv[]){
    int chapa_1, chapa_2, chapa_3, chapa_4;
    int brancos, nulos, conta_votos;
    int voto;

    conta_votos = 0;
    chapa_1 = 0;
    chapa_2 = 0;
    chapa_3 = 0;
    chapa_4 = 0;
    brancos = 0;
    nulos = 0;
    voto = 9;
    while (voto != 0)
    {
        printf("Opções:\n");
        printf("(1) - Chapa 1\n");
        printf("(2) - Chapa 2\n");
        printf("(3) - Chapa 3\n");
        printf("(4) - Chapa 4\n");
        printf("(5) - Voto nulo\n");
        printf("(6) - Voto em branco\n");
        printf("Qual seu voto?\n");
        scanf("%d", &voto);

        /**
         * Caso o voto sejá inválido, fora do intervalo [1, 6] o
         * sistema não contabiliza o voto, apresenta a mensagem de 
         * erro ou de encerramento e retorna para a leitura do voto.
         */
        if(voto < 1 || voto > 6)
        {
            /**
             * voto 0 (zero) siginifica encerramento da votação, e não
             * é contabilizado, assim, verifica-se se a situação é de
             * voto zero ou voto inválido.
             */
            if(voto == 0)
                printf("Votação encerrada.\n\n");
            else
                printf("Voto inválido, selecione uma opção válida.\n");
        }
        else
        {
            conta_votos += 1;
            switch(voto)
            {
                case 1:
                    chapa_1 += 1;
                    break;
                case 2: 
                    chapa_2 += 1;
                    break;
                case 3:
                    chapa_3 += 1;
                    break;
                case 4:
                    chapa_4 += 1;
                    break;
                case 5: 
                    nulos += 1;
                    break;
                case 6:
                    brancos += 1;
                    break;
            }
        }
    }

    imprime_relatorio("Chapa 1", chapa_1, conta_votos);
    imprime_relatorio("Chapa 2", chapa_2, conta_votos);
    imprime_relatorio("Chapa 3", chapa_3, conta_votos);
    imprime_relatorio("Chapa 4", chapa_4, conta_votos);
    imprime_relatorio("Nulos", nulos, conta_votos);
    imprime_relatorio("Brancos", brancos, conta_votos);
    
    return 0;
}

void imprime_relatorio(char nome[64], int votos_recebidos, int total_votos){
    printf("%s\n\tVotal de votos: %d de %d\n\tPorcentagem: %.2f %%\n", 
        nome, 
        votos_recebidos, 
        total_votos,
        calcula_percentual(votos_recebidos, total_votos)
    );
}

float calcula_percentual(int votos_recebidos, int total_votos){
    return votos_recebidos * 100.0 / total_votos; 
}