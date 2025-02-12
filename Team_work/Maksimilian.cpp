// ��������� ������� �������/������ �����
#include "maksimilian.h"  // ϳ��������� ������������� ����� � ����������� ��������� Car � �������

// ������� ���������� ������ ��������� � ������� ����
void saveToBinary(Car cars[], int n, const string& filename) {
    ofstream file(filename, ios::binary);  // ³�������� ���� ��� ������ � ��������� �����
    if (!file) {  // ����������, �� ���� �������� ������
        cout << "������� �������� �����!\n";
        return;
    }
    file.write((char*)cars, sizeof(Car) * n);  // �������� ���� ����� � ����
    file.close();  // ��������� ����
}

// ������� ������������ ������ ��������� �� �������� �����
int loadFromBinary(Car cars[], const string& filename) {
    ifstream file(filename, ios::binary);  // ³�������� ���� ��� ������� � �������� �����
    if (!file) {  // ����������, �� ���� ����
        cout << "���� �� ��������!\n";
        return 0;
    }
    int count = 0;  // ˳������� �������� ���������
    while (file.read((char*)&cars[count], sizeof(Car))) {  // ������ ��'����, ���� � ��� � ����
        count++;
    }
    file.close();  // ��������� ����
    return count;  // ��������� ������� �������� ������
}

// ������� ���������� ������ ��������� � ��������� ����
void saveToText(Car cars[], int n, const string& filename) {
    ofstream file(filename);  // ³�������� ���� ��� ������ � ���������� �����
    if (!file) {  // ����������, �� ���� �������� ������
        cout << "������� �������� �����!\n";
        return;
    }
    for (int i = 0; i < n; i++) {  // �������� ����� ��������� � ��������� ����
        file << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
            << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
    }
    file.close();  // ��������� ����
}

void add(Car newCar, const string& filename) {
    ofstream file(filename, ios::binary | ios::app); // ³�������� ���� � ����� ������
    if (!file) {
        cout << "������� �������� �����!\n";
        return;
    }
    file.write((char*)&newCar, sizeof(Car)); // �������� ���� ������ � ����
    file.close();
}

