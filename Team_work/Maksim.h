#pragma once  

#ifndef MAKSIM_H  // Перевірка, чи макрос MAKSIM_H ще не визначений
#define MAKSIM_H  // Визначення макроса MAKSIM_H

#include "maksimilian.h"  // Підключення заголовкового файлу, де описана структура Car

// Функція для фільтрації автомобілів за маркою
void filterByBrand(Car cars[], int n, const string& brand);

// Функція для фільтрації автомобілів за типом і роком випуску
void filterByTypeAndYear(Car cars[], int n, const string& type, int year);

#endif  // Завершення