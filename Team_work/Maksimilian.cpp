// Реалізація функцій читання/запису файлів
#include "maksimilian.h"  // Підключення заголовкового файлу з оголошенням структури Car і функцій

// Функція збереження масиву автомобілів у бінарний файл
void saveToBinary(Car cars[], int n, const string& filename) {
    ofstream file(filename, ios::binary);  // Відкриваємо файл для запису в бінарномуу режимі
    if (!file) {  // Перевіряємо, чи файл відкрився успішно
        cout << "Помилка відкриття файлу!\n";
        return;
    }
    file.write((char*)cars, sizeof(Car) * n);  // Записуємо весь масив у файл
    file.close();  // Закриваємо файл
}

// Функція завантаження масиву автомобілів із бінарного файлу
int loadFromBinary(Car cars[], const string& filename) {
    ifstream file(filename, ios::binary);  // Відкриваємо файл для читання в бінарному режимі
    if (!file) {  // Перевіряємо, чи файл існує
        cout << "Файл не знайдено!\n";
        return 0;
    }
    int count = 0;  // Лічильник зчитаних автомобілів
    while (file.read((char*)&cars[count], sizeof(Car))) {  // Читаємо об'єкти, поки є дані у файлі
        count++;
    }
    file.close();  // Закриваємо файл
    return count;  // Повертаємо кількість зчитаних записів
}

// Функція збереження масиву автомобілів у текстовий файл
void saveToText(Car cars[], int n, const string& filename) {
    ofstream file(filename);  // Відкриваємо файл для запису у текстовому режимі
    if (!file) {  // Перевіряємо, чи файл відкрився успішно
        cout << "Помилка відкриття файлу!\n";
        return;
    }
    for (int i = 0; i < n; i++) {  // Записуємо кожен автомобіль у текстовий файл
        file << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
            << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
    }
    file.close();  // Закриваємо файл
}

void add(Car newCar, const string& filename) {
    ofstream file(filename, ios::binary | ios::app); // Відкриваємо файл у режимі допису
    if (!file) {
        cout << "Помилка відкриття файлу!\n";
        return;
    }
    file.write((char*)&newCar, sizeof(Car)); // Записуємо нову машину у файл
    file.close();
}

