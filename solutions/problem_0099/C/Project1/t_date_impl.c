#include "t_date.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

struct date {
    int day, month, year;
};

/**
 * Assinatura de funções utilizadas localmente.
 */
int days_in_month(int month, int year);
bool is_leap_year(int year);
char* month_in_full(int month);


/**
 * Implementação das funções do TAD
 */
T_Date create_date(int day, int month, int year) {
    T_Date date_ptr = NULL;
    
    if (year >= 1000 && year <= 3000) {
        if (month >= 1 && month <= 12) {
            if (day > 0 && day <= days_in_month(month, year)) {
                /**
                 * Data válida, criado uma variável e preenchida com os
                 * valores dos argumentos.
                 */
                date_ptr = (struct date*) malloc(sizeof(struct date));
                if (date_ptr != NULL){
                    
                    /**
                     * Varivável criada dinamicamente, por ser utilizada.
                     */
                    date_ptr->day = day;
                    date_ptr->month = month;
                    date_ptr->year = year;
                }
            }
        }
    }
    
    return date_ptr;
}

char* ptbr_date(T_Date date){
    char* date_str = (char*) malloc(sizeof(char) * 12);
    if (date_str == NULL) {
        return NULL;
    }

    sprintf(date_str, "%02d/%02d/%04d", date->day, date->month, date->year);
    return date_str;
}

char* usa_date(T_Date date){
    char* date_str = (char*) malloc(sizeof(char) * 12);
    if (date_str == NULL) {
        return NULL;
    }

    sprintf(date_str, "%04d-%02d-%02d", date->year, date->month, date->day);
    return date_str;
}

char* complete_date(T_Date date, char* location) {
    char* string = malloc(sizeof(char) * 64);
    if (string != NULL) {
        sprintf(string, "%s, %02d de %s de %04d.", location, date->day, month_in_full(date->month), date->year);
    }

    return string;
}

void destroy_date(T_Date* date) {
    free(*date);
    *date = NULL;
}


/**
 * Implementação das funções locais.
 */
int days_in_month(int month, int year) {
    int days = 0;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = is_leap_year(year) ? 29 : 28;
            break;
    }
    return days;
}

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

char* month_in_full(int month) {
    char* month_str = malloc(sizeof(char) * 16);
    if (month_str == NULL) {
        return NULL;
    }

    if (month == 1) {
        strcpy(month_str, "janeiro");
    } else if (month == 2) {
        strcpy(month_str, "fevereiro");
    } else if (month == 3) {
        strcpy(month_str, "março");
    } else if (month == 4) {
        strcpy(month_str, "abril");
    } else if (month == 5) {
        strcpy(month_str, "maio");
    } else if (month == 6) {
        strcpy(month_str, "junho");
    } else if (month == 7) {
        strcpy(month_str, "julho");
    } else if (month == 8) {
        strcpy(month_str, "agosto");
    } else if (month == 9) {
        strcpy(month_str, "setembro");
    } else if (month == 10) {
        strcpy(month_str, "outubro");
    } else if (month == 11) {
        strcpy(month_str, "novembro");
    } else if (month == 12) {
        strcpy(month_str, "dezembro");
    } else {
        strcpy(month_str, "noname");
    }
    return month_str;
}