#include <stdio.h>

void print_hhmmss(int time);

int main(){
    
    int time_in_seconds;

    printf("Informe tempo do evento em segundos: ");
    scanf("%d", &time_in_seconds);

    print_hhmmss(time_in_seconds);

    return 0;
}

void print_hhmmss(int time){
    int seconds, minutes, hours;

    /**
     * 1h = 3600s (60x60)
    */
    hours = time / 3600;
    time = time % 3600;

    /**
     * 1m = 60s
    */
    time = time / 60;
    seconds = time % 60;

    printf("Tempo: %d:%d:%d\n\n", hours, minutes, seconds);
}
