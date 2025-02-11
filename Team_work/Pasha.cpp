// sort.h
#ifndef SORT_H
#define SORT_H

#include "core.h"

void sortCars(Car cars[], int n);
void findMaxDistanceCars(Car cars[], int n);

#endif // SORT_H

// sort.cpp
#include "sort.h"

// Sort by fuel consumption
void sortCars(Car cars[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cars[i].fuelUsage > cars[j].fuelUsage) {
                swap(cars[i], cars[j]);
            }
        }
    }
}

// Search for cars that can travel the most without refueling
void findMaxDistanceCars(Car cars[], int n) {
    double maxDistance = 0;
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);
        if (distance > maxDistance) {
            maxDistance = distance;
        }
    }
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);
        if (distance == maxDistance) {
            cout << cars[i].brand << " " << cars[i].type << " (" << distance << " κμ)" << endl;
        }
    }
}