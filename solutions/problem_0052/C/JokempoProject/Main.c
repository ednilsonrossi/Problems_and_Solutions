/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */



/**
 * Bibliotecas utilizadas na solução do problema.
*/
#include <stdio.h>      // i/o padrão
#include <stdlib.h>     // para utilizar a função srand() e rand()
#include <time.h>       // para utilizar a função time()

#define ROCK 1          // Pedra
#define PAPER 2         // Papel
#define SCISSORS 3      // Tesoura
#define WIN 1           // Vitória
#define LOST 2          //Derrota
#define DRAW 3          //Empate

/**
 * Função apresenta as possibilidades de jogadas para um jogador humano que
 * selecionará sua Coisa para o confronto;
*/
int human_move();

/**
 * Função retorna a escolha aleatória da máquina, sempre será retornado um 
 * valor no intervalo [1..3] referente a uma Coisa.
*/
int machine_move();

/**
 * Função simplesmente apresenta qual a Coisa/Arma passada como argumento.
*/
void show_weapon(int weapon);

/**
 * Função apresenta as Coisas / Armas selecionadas por cada um dos jogadores,
 * ou seja, o jogador humano e a máquina.
*/
void show_weapons(int human_weapon, int machine_weapon);

/**
 * Função realiza o combate das Coisas e faz o retorno em função do jogador, 
 * ou seja, o retorno reflete se o jogador humano (primeiro argumento) empatou,
 * perdeu ou ganhou da máquina (segundo argumento).
*/
int war(int thing_human, int thing_machine);


int main(int argc, char const *argv[]){
    
    int human_player, machine_player;

    human_player = human_move();
    machine_player = machine_move();


    show_weapons(human_player, machine_player);
    switch (war(human_player, machine_player)){
        case WIN:
            printf("Jogador venceu a máquina.\n");
            break;
        
        case LOST:
            printf("Máquina venceu o jogador.\n");
            break;

        case DRAW:
            printf("Jogador e Máquina empataram.\n");
            break;
    }
    return 0;
}

int human_move(){
    int move;
    printf("Escolha sua coisa para competir: \n");
    printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
    printf("Sua seleção: ");
    scanf("%d", &move);
    if(move < 1 || move > 3){
        /**
         * Como o valor escolhido pelo usuário é inválido o computador sorteará 
         * uma Coisa aleatória para o jogador. Como a função machine_move() já 
         * retorna uma coisa aleatória, optou-se por REUTILIZAR a função já existente
         * no código.
        */
        move = machine_move();
        printf("Coisa selecionada é inválida. Definiu-se que a será utilizado: ");
        show_weapon(move);
        printf("\n");
    }
    return move;
}

int machine_move(){
    /**
     * Função srand() significa "seed rand", ou seja, semente para um aleatório. A seed 
     * é o valor sobre o qual serão realizados cálculos para obter um valor aleatório, caso
     * seja informado um valor constante sempre será retornada a mesma sequencia de valores 
     * aleatórios, de forma que não é tão aleatório assim. Com o uso da função time() como 
     * argumento de srand() a semente sempre será a hora do sistema, de forma que a semente
     * é alterada a cada milissegundo, gerando de forma correta valores aleatórios.
    */
    srand(time(NULL));

    /**
     * A função rand() é responsável por retornar um valor aleatório. Para limitar os valores
     * utiliza-se como estratégia o RESTO DA DIVISÃO. No caso, qualquer valor aleatório dividido
     * por 3 gera como resto os valores 0 ou 1 ou 2. Assim, ao somar 1, temos como possíveis
     * valores: 1, 2 ou 3.
    */
    return (rand() % 3) + 1;
}


void show_weapon(int weapon){
    switch(weapon){
        case ROCK:
        printf("PEDRA");
        break;
            
        case PAPER: 
            printf("PAPEL");
            break;

        case SCISSORS:
            printf("TESOURA");
            break;
    }
}

void show_weapons(int human_weapon, int machine_weapon){
    printf("Humano\t\tX\tMáquina\n");
    show_weapon(human_weapon);
    printf("\t\tX\t");
    show_weapon(machine_weapon);
    printf("\n");
}


/**
 * Foram desenvolvidas diversas opções de implementação para a função war. Em todas utiliza-se
 * como estratégia analisar todas as possibilidades de solução, 2^n + 1 = 9 possibilidades.
 * 
 * Seugere-se que cada uma das soluções seja estudada e considerada. 
*/

int war(int thing_human, int thing_machine){
    int result;

    if (thing_human == ROCK){
        if (thing_machine == ROCK){
            result = DRAW;
        } else {
            if(thing_machine == PAPER){
                result = LOST;
            } else {
                result = WIN;
            }
        }
    } else {
        if (thing_human == PAPER){
            if (thing_machine == PAPER){
            result = DRAW;
            } else {
                if(thing_machine == SCISSORS){
                    result = LOST;
                } else {
                    result = WIN;
                }
            }
        } else {
            if (thing_machine == SCISSORS){
                result = DRAW;
            } else {
                if(thing_machine == ROCK){
                    result = LOST;
                } else {
                    result = WIN;
                }
            }
        }
    }
    return result;
}


/*
int war(int thing_human, int thing_machine){
    int result;
    if(thing_human == ROCK && thing_machine == ROCK){
        result = DRAW;
    } else if(thing_human == ROCK && thing_machine == PAPER){
        result = LOST;
    } else if(thing_human == ROCK && thing_machine == SCISSORS){
        result = WIN;
    } else if(thing_human == PAPER && thing_machine == PAPER){
        result = DRAW;
    } else if(thing_human == PAPER && thing_machine == SCISSORS){
        result = LOST;
    } else if(thing_human == PAPER && thing_machine == ROCK){
        result = WIN;
    } else if(thing_human == SCISSORS && thing_machine == SCISSORS){
        result = DRAW;
    } else if(thing_human == SCISSORS && thing_machine == ROCK){
        result = LOST;
    } else if(thing_human == SCISSORS && thing_machine == PAPER){
        result = WIN;
    }
    return result;
}
*/

/*
int war(int thing_human, int thing_machine){
    int result;
    switch(thing_human){
        case ROCK:
            switch(thing_machine){
                case ROCK:
                    result = DRAW;
                    break;
                
                case PAPER:
                    result = LOST;
                    break;

                case SCISSORS:
                    result = WIN;
                    break;
            }
            break;

        case PAPER:
            switch(thing_machine){
                case PAPER:
                    result = DRAW;
                    break;
                
                case SCISSORS:
                    result = LOST;
                    break;

                case ROCK:
                    result = WIN;
                    break;
            }
            break;

        case SCISSORS:
            switch(thing_machine){
                case SCISSORS:
                    result = DRAW;
                    break;
                
                case ROCK:
                    result = LOST;
                    break;
                
                case PAPER:
                    result = WIN;
                    break;
            }
            break;
    }
    return result;
}
*/

/*
int war(int thing_human, int thing_machine){
    int result;
    if (thing_human == ROCK){
        if(thing_machine == ROCK){
            result = DRAW;
        } else if(thing_machine == PAPER){
            result = LOST;
        } else {
            result = WIN;
        }
    } else {
        if(thing_human == PAPER){
            switch (thing_machine){
                case PAPER:
                    result = DRAW;
                    break;

                case SCISSORS:
                    result = LOST;
                    break;

                case ROCK:
                    result = WIN;
                    break;
            }
        } else {
            result = thing_machine == SCISSORS ? DRAW : thing_machine == ROCK ? DRAW : WIN;
        }
    }
    
    return result;
}
*/