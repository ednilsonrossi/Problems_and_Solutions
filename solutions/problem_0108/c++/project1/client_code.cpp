#include <iostream>
#include "queue.h"

using namespace std;

int main() {

    Queue fila(5);
    char dado;

    cout << (fila.enqueue('A') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('B') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('C') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('D') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('E') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('F') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('G') ? "Entrou" : "Não entrou") << endl;
    cout << (fila.enqueue('H') ? "Entrou" : "Não entrou") << endl;

    if (fila.dequeue(&dado)) {
        cout << "Saiu: " << dado << endl;
    }
    if (fila.dequeue(&dado)) {
        cout << "Saiu: " << dado << endl;
    }
    if (fila.dequeue(&dado)) {
        cout << "Saiu: " << dado << endl;
    }
    
    cout << (fila.jumped_queue('Z') ? "Furou a Fila" : "Não furou a Fila") << endl;
    cout << (fila.jumped_queue('Y') ? "Furou a Fila" : "Não furou a Fila") << endl;

    while (!fila.is_empty()) {
        fila.dequeue(&dado);
        cout << "Saiu: " << dado << endl;
    }

    return 0;
}