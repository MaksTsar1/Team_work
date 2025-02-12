#include "maksimilian.h"
#include "dima.h"
#include "pasha.h"
#include "maksim.h"


int main() {
    const string filename = "cars.dat";
    Car cars[100];
    int n = 0;
    int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Запис у файл\n";
        cout << "2. Пошук за критеріями\n";
        cout << "3. Зчитати з файлу\n";
        cout << "4. Додати авто у файл\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Скільки авто записати? ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << "Марка: "; cin >> cars[i].brand;
                cout << "Тип (легковий/вантажний): "; cin >> cars[i].type;
                cout << "Потужність (к.с.): "; cin >> cars[i].power;
                cout << "Витрата пального (л/100 км): "; cin >> cars[i].fuelUsage;
                cout << "Об'єм паливного бака (л): "; cin >> cars[i].tankVolume;
                cout << "Рік випуску: "; cin >> cars[i].year;
            }
            saveToBinary(cars, n, filename);
            cout << "Дані збережено у файл.\n";
            break;
        }

        case 2: {
            int searchChoice;
            cout << "Оберіть пошук:\n";
            cout << "1. Найпотужніший легковий і найслабший вантажний\n";
            cout << "2. Авто з найбільшим запасом ходу\n";
            cout << "3. Фільтрація за маркою\n";
            cout << "4. Фільтрація за типом і роком\n";
            cout << "Ваш вибір: ";
            cin >> searchChoice;

            switch (searchChoice) {
            case 1:
                findMostAndLeastPowerful(cars, n);
                break;
            case 2:
                findMaxDistanceCars(cars, n);
                break;
            case 3: {
                string brand;
                cout << "Введіть марку авто: ";
                cin >> brand;
                filterByBrand(cars, n, brand); // Виклик функції
                break;
            }
            case 4: {
                string type;
                int year;
                cout << "Введіть тип авто: ";
                cin >> type;
                cout << "Введіть рік випуску: ";
                cin >> year;
                filterByTypeAndYear(cars, n, type, year); // Виклик функції
                break;
            }
            default:
                cout << "Неправильний вибір!\n";
            }
            break;
        }

        case 3:
            n = loadFromBinary(cars, filename);
            cout << "Зчитано " << n << " авто з файлу.\n";
            break;

        case 4: {
            Car newCar;
            cout << "Введіть дані для нового авто:\n";
            cout << "Марка: "; cin >> newCar.brand;
            cout << "Тип (легковий/вантажний): "; cin >> newCar.type;
            cout << "Потужність (к.с.): "; cin >> newCar.power;
            cout << "Витрата пального (л/100 км): "; cin >> newCar.fuelUsage;
            cout << "Об'єм паливного бака (л): "; cin >> newCar.tankVolume;
            cout << "Рік випуску: "; cin >> newCar.year;

            add(newCar, filename);
            cout << "Дані додано у файл.\n";
            break;
        }

        case 0:
            cout << "Вихід з програми...\n";
            break;

        default:
            cout << "Невірний вибір! Спробуйте ще раз.\n";
        }
    } while (choice != 0);

    return 0;
}