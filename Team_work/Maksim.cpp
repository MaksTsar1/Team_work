#include "maksim.h"  // Підключення заголовкового файлу, де оголошені функції фільтрації

// Функція для виводу автомобілів, що відповідають заданій марці
void filterByBrand(Car cars[], int n, const string& brand) {
    for (int i = 0; i < n; i++) {  // Проходимося по всіх автомобілях у масиві
        if (brand == cars[i].brand) {  // Перевіряємо, чи марка збігається із заданою
            // Виводимо інформацію про автомобіль
            cout << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
                << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
        }
    }
}

// Функція для виводу автомобілів за заданим типом і роком випуску
void filterByTypeAndYear(Car cars[], int n, const string& type, int year) {
    for (int i = 0; i < n; i++) {  // Перебираємо всі автомобілі
        if (type == cars[i].type && year == cars[i].year) {  // Перевіряємо збіг типу та року
            // Виводимо інформацію про автомобіль
            cout << cars[i].brand << " " << cars[i].type << " " << cars[i].power << " "
                << cars[i].fuelUsage << " " << cars[i].tankVolume << " " << cars[i].year << endl;
        }
    }
}