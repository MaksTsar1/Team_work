#pragma once
//Оголошення структури та базових функцій

#ifndef MAKSIMILIAN_H
#define MAKSIMILIAN_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Структура автомобіля
struct Car {
    char brand[30];     // Марка авто
    char type[15];      // Тип: "легковий" або "вантажний"
    int power;          // Потужність (к.с.)
    double fuelUsage;   // Витрата палива (л/100 км)
    double tankVolume;  // Об’єм паливного бака (л)
    int year;           // Рік випуску
};

// Функції роботи з файлами
void saveToBinary(Car cars[], int n, const string& filename);
int loadFromBinary(Car cars[], const string& filename);
void saveToText(Car cars[], int n, const string& filename);

#endif 
