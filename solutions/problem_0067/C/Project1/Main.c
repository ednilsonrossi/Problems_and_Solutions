#include <stdio.h>
#define ALUNOS 3

int main(){

    float nota_1, nota_2, media, media_sala;
    int aluno;
    int conta_ap, conta_ex, conta_rep;

    conta_ap = 0;
    conta_ex = 0;
    conta_rep = 0;
    media_sala = 0;
    aluno = 0;
    while (aluno != ALUNOS){
        printf("Digite 2 notas do aluno %d:\n", aluno + 1);
        scanf("%f%f", &nota_1, &nota_2);

        media = (nota_1 + nota_2) / 2;
        media_sala += media;
        printf("Média: %.2f \t Situação: ", media);
        if(media <= 3){
            printf("REPROVADO.\n");
            conta_rep = conta_rep + 1;
        } else {
            if(media < 7){
                printf("EXAME.\n");
                conta_ex++;
            } else {
                printf("APROVADO.\n");
                conta_ap += 1;
            }
        }
        aluno += 1;
    }
    media_sala = media_sala / ALUNOS;
    printf("Alunos aprovados.: %d\n", conta_ap);
    printf("Alunos de exame..: %d\n", conta_ex);
    printf("Alunos reprovados: %d\n", conta_rep);
    printf("Média da classe: %.2f\n\n", media_sala);
    
    return 0;
}
