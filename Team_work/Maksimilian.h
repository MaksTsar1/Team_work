#pragma once  

#ifndef MAKSIMILIAN_H  // Перевірка, чи макрос MAKSIMILIAN_H ще не визначений
#define MAKSIMILIAN_H  // Визначення макроса MAKSIMILIAN_H

#include <iostream>   
#include <fstream>    // Підключення бібліотеки для роботи з файлами
#include <string>     // Підключення бібліотеки для роботи з рядками

using namespace std; 

// Структура автомобіля
struct Car {
    char brand[30];     // Марка авто (наприклад, "Toyota", "BMW")
    char type[15];      // Тип авто: "легковий" або "вантажний"
    int power;          // Потужність двигуна в кінських силах (к.с.)
    double fuelUsage;   // Витрата палива в літрах на 100 км
    double tankVolume;  // Об’єм паливного бака в літрах
    int year;           // Рік випуску автомобіля
};

// Функції роботи з файлами

// Збереження масиву автомобілів у бінарний файл
void saveToBinary(Car cars[], int n, const string& filename);

// Завантаження масиву автомобілів з бінарногооо файлу, повертає кількість завантажених авто
int loadFromBinary(Car cars[], const string& filename);

// Збереження масиву автомобілів у текстовий файл
void saveToText(Car cars[], int n, const string& filename);

#endif  // Завершення