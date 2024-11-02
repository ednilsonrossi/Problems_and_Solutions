#include "park.h"

int main() {
    int carPlate;    
    T_Parking garage;

    garage = createParking(5);

    printf("Saiu: %d\n", exitParking(garage));

    carPlate = 1234;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    carPlate = 2345;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    carPlate = 3456;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    carPlate = 4567;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    carPlate = 5678;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    carPlate = 6789;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    showParking(garage);

    printf("Saiu: %d\n", exitParking(garage));
    printf("Saiu: %d\n", exitParking(garage));
    printf("Saiu: %d\n", exitParking(garage));

    showParking(garage);

    carPlate = 1234;
    printf("Entrou %d -> %s\n", carPlate, enterParking(garage, carPlate)?"Sim":"Não");

    showParking(garage);


    destroyParking(garage);
    return 0;
}
