#pragma once  

#ifndef Dima_H  // Перевіряє, чи макрос Dima_H ще не визначений
#define Dima_H  // Визначає макрос Dima_H, щоб уникнути повторного включення

#include "maksimilian.h"  // Підключення заголовкового файлу

// Оголошення функції для пошуку найпотужнішого легкового і найменш потужного вантажного авто
void findMostAndLeastPowerful(Car cars[], int n);

#endif  // Завершення