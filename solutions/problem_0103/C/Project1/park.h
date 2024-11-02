#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct parking *T_Parking;

T_Parking createParking(int capacity);

bool enterParking(T_Parking parking, int carPlate);

int exitParking(T_Parking parking);

void showParking(T_Parking parking);

void destroyParking(T_Parking parking);