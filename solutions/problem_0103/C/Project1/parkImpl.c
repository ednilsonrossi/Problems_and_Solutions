#include "park.h"

struct parking {
    int *parkingSpaces;
    int occupiedSpaces;
    int totalCapacity;
};


T_Parking createParking(int capacity){
    T_Parking parking = NULL;

    if (capacity > 0) {
        parking = malloc( sizeof(struct parking) );
        
        parking->occupiedSpaces = 0;
        parking->totalCapacity = capacity;
        parking->parkingSpaces = malloc(sizeof(int) * capacity);
    }

    return parking;
}

bool enterParking(T_Parking parking, int carPlate) {
    bool result = false;
    if (parking != NULL) {
        if (parking->occupiedSpaces < parking->totalCapacity) {
            parking->parkingSpaces[parking->occupiedSpaces] = carPlate;
            parking->occupiedSpaces += 1;
            result = true;
        } 
    }
    return result;
}

int exitParking(T_Parking parking) {
    int carPlate = -1;
    if (parking != NULL) {
        if (parking->occupiedSpaces > 0) {
            carPlate = parking->parkingSpaces[0];
            for (int i = 0; i < parking->occupiedSpaces - 1; i++){
                parking->parkingSpaces[i] = parking->parkingSpaces[i+1];
            }
            parking->occupiedSpaces -= 1;
        }
    }
    return carPlate;
}

void showParking(T_Parking parking) {
    printf("Estacionamento: \n");
    for (int i = 0; i < parking->occupiedSpaces; i++) {
        printf("\t->%04d\n", parking->parkingSpaces[i]);
    }
}

void destroyParking(T_Parking parking) {
    free(parking);
}