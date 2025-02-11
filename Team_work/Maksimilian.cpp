// Реалізація функцій читання/запису файлів
#include "maksimilian.h"

// Збереження в бінарний файл
void saveToBinary(Car cars[], int n, const string& filename) {
    ofstream file(filename, ios::binary);
    if (!file) {
        cout << "Помилка відкриття файлу!\n";
        return;
    }
    file.write((char*)cars, sizeof(Car) * n);
    file.close();
}

// Завантаження з бінарного файлу
int loadFromBinary(Car cars[], const string& filename) {
    ifstream file(filename, ios::binary);
    if (!file) {
        cout << "Файл не знайдено!\n";
        return 0;
    }
    int count = 0;
    while (file.read((char*)&cars[count], sizeof(Car))) {
        count++;
    }
    file.close();
    return count;
}

// Збереження у текстовий файл
void saveToText(Car cars[], int n, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Помилка відкриття файлу!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        file << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
            << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
    }
    file.close();
}