#pragma once  

#ifndef MAKSIM_H  // ��������, �� ������ MAKSIM_H �� �� ����������
#define MAKSIM_H  // ���������� ������� MAKSIM_H

#include "maksimilian.h"  // ϳ��������� ������������� �����, �� ������� ��������� Car

// ������� ��� ���������� ��������� �� ������
void filterByBrand(Car cars[], int n, const string& brand);

// ������� ��� ���������� ��������� �� ����� � ����� �������
void filterByTypeAndYear(Car cars[], int n, const string& type, int year);

#endif  // ����������