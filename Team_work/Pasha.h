#pragma once  

#ifndef PASHA_H  // Перевірка, чи макрос PASHA_H ще не визначений
#define PASHA_H  // Визначення макроса PASHA_H

#include "maksimilian.h"  // Підключення заголовкового файлу

// Оголошення функції для сортування масиву автомобілів
void sortCars(Car cars[], int n);

// Оголошення функції для пошуку автомобілів з найбільшою дальністю ходу
void findMaxDistanceCars(Car cars[], int n);

#endif  // Завершення