#include <stdlib.h>

typedef struct date* T_Date;

T_Date create_date(int day, int month, int year);

char* ptbr_date(T_Date date);

char* usa_date(T_Date date);

char* complete_date(T_Date date, char* location);

void destroy_date(T_Date* date);