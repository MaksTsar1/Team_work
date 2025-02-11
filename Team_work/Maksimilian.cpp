// ��������� ������� �������/������ �����
#include "maksimilian.h"

// ���������� � ������� ����
void saveToBinary(Car cars[], int n, const string& filename) {
    ofstream file(filename, ios::binary);
    if (!file) {
        cout << "������� �������� �����!\n";
        return;
    }
    file.write((char*)cars, sizeof(Car) * n);
    file.close();
}

// ������������ � �������� �����
int loadFromBinary(Car cars[], const string& filename) {
    ifstream file(filename, ios::binary);
    if (!file) {
        cout << "���� �� ��������!\n";
        return 0;
    }
    int count = 0;
    while (file.read((char*)&cars[count], sizeof(Car))) {
        count++;
    }
    file.close();
    return count;
}

// ���������� � ��������� ����
void saveToText(Car cars[], int n, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "������� �������� �����!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        file << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
            << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
    }
    file.close();
}