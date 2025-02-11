

// analysis.cpp
#include "analysis.h"

// Пошук найпотужнішого легкового і найменш потужного вантажного авто
void findMostAndLeastPowerful(Car cars[], int n) {
    int maxcP = 0, mintP = 10000;
    string maxcB, mintB;

    for (int i = 0; i < n; i++) {
        if (string(cars[i].type) == "легковий" && cars[i].power > maxCarPower) {
            maxcP = cars[i].power;
            maxcB = cars[i].brand;
        }
        if (string(cars[i].type) == "вантажний" && cars[i].power < minTruckPower) {
            mintP = cars[i].power;
            mintP = cars[i].brand;
        }
    }

    cout << "Найпотужніший легковий: " << maxcB << " (" << maxcP << " к.с.)\n";
    cout << "Найменш потужний вантажний: " << mintB << " (" << mintP << " к.с.)\n";
}