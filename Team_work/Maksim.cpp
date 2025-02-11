#include "maksim.h"  // ϳ��������� ������������� �����, �� �������� ������� ����������

// ������� ��� ������ ���������, �� ���������� ������ �����
void filterByBrand(Car cars[], int n, const string& brand) {
    for (int i = 0; i < n; i++) {  // ����������� �� ��� ���������� � �����
        if (brand == cars[i].brand) {  // ����������, �� ����� �������� �� �������
            // �������� ���������� ��� ���������
            cout << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
                << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
        }
    }
}

// ������� ��� ������ ��������� �� ������� ����� � ����� �������
void filterByTypeAndYear(Car cars[], int n, const string& type, int year) {
    for (int i = 0; i < n; i++) {  // ���������� �� ��������
        if (type == cars[i].type && year == cars[i].year) {  // ���������� ��� ���� �� ����
            // �������� ���������� ��� ���������
            cout << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
                << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
        }
    }
}