#pragma once  

#ifndef MAKSIMILIAN_H  // ��������, �� ������ MAKSIMILIAN_H �� �� ����������
#define MAKSIMILIAN_H  // ���������� ������� MAKSIMILIAN_H

#include <iostream>   
#include <fstream>    // ϳ��������� �������� ��� ������ � �������
#include <string>     // ϳ��������� �������� ��� ������ � �������

using namespace std; 

// ��������� ���������
struct Car {
    char brand[30];     // ����� ���� (���������, "Toyota", "BMW")
    char type[15];      // ��� ����: "��������" ��� "���������"
    int power;          // ��������� ������� � ������� ����� (�.�.)
    double fuelUsage;   // ������� ������ � ����� �� 100 ��
    double tankVolume;  // �ᒺ� ��������� ���� � �����
    int year;           // г� ������� ���������
};

// ������� ������ � �������

// ���������� ������ ��������� � ������� ����
void saveToBinary(Car cars[], int n, const string& filename);

// ������������ ������ ��������� � ���������� �����, ������� ������� ������������ ����
int loadFromBinary(Car cars[], const string& filename);

// ���������� ������ ��������� � ��������� ����
void saveToText(Car cars[], int n, const string& filename);

#endif  // ����������