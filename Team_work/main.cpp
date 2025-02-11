#include "maksimilian.h"
#include "maksim.h"
#include "dima.h"
#include "pasha.h"

int main() {
    const string filename = "cars.dat";
    Car cars[100];
    int n = loadFromBinary(cars, filename);

    cout << "Виберіть режим роботи...\n";

    // Додати виклики функцій тут

    saveToText(cars, n, "results.txt");
    return 0;
}