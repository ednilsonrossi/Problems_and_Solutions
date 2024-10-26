#include <stdio.h>
#include "t_date.h"

int main() {
    
    T_Date date;

    date = create_date(29, 02, 2000);
    if (date != NULL){
        printf("%s\n", ptbr_date(date));
        printf("%s\n", usa_date(date));
        printf("%s\n", complete_date(date, "Araraquara"));
    } else {
        printf("Data inválida.\n");
    }
    destroy_date(&date);

    date = create_date(28, 10, 2024);
    if (date != NULL){
        printf("%s\n", ptbr_date(date));
        printf("%s\n", usa_date(date));
        printf("%s\n", complete_date(date, "Araraquara"));
    } else {
        printf("Data inválida.\n");
    }
    destroy_date(&date);

    return 0;
}
