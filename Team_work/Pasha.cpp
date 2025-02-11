#include "pasha.h"  // Підключення заголовкового файлу

// Функція сортування автомобілів за витратою пального (у порядку зростання)
void sortCars(Car cars[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Перебір усіх елементів масиву
        for (int j = i + 1; j < n; j++) {  // Порівняння поточного авто з іншими
            if (cars[i].fuelUsage > cars[j].fuelUsage) {  // Якщо поточний авто споживає більше пального, ніж наступний
                swap(cars[i], cars[j]);  // Міняємо їх місцями
            }
        }
    }
}
// Функція пошуку авто, які можуть проїхати найбільше без дозаправки
void findMaxDistanceCars(Car cars[], int n) {
    double maxDistance = 0;  // Змінна для збереження максимальної відстані

    // Знаходимо максимальну відстань без дозаправки
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);  // Обчислюємо відстань (км)
        if (distance > maxDistance) {
            maxDistance = distance;  // Оновлюємо максимальну відстань
        }
    }

    // Вивід автомобілів, які мають максимальну дальність ходу
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);
        if (distance == maxDistance) {  // Якщо авто має максимальну дальність
            cout << cars[i].brand << " " << cars[i].type << " (" << distance << " км)" << endl;
        }
    }
}
