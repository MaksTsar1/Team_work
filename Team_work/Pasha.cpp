#include "pasha.h"  // ϳ��������� ������������� �����

// ������� ���������� ��������� �� �������� �������� (� ������� ���������)
void sortCars(Car cars[], int n) {
    for (int i = 0; i < n - 1; i++) {  // ������ ��� �������� ������
        for (int j = i + 1; j < n; j++) {  // ��������� ��������� ���� � ������
            if (cars[i].fuelUsage > cars[j].fuelUsage) {  // ���� �������� ���� ������� ����� ��������, �� ���������
                swap(cars[i], cars[j]);  // ̳����� �� ������
            }
        }
    }
}
// ������� ������ ����, �� ������ ������� �������� ��� ����������
void findMaxDistanceCars(Car cars[], int n) {
    double maxDistance = 0;  // ����� ��� ���������� ����������� ������

    // ��������� ����������� ������� ��� ����������
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);  // ���������� ������� (��)
        if (distance > maxDistance) {
            maxDistance = distance;  // ��������� ����������� �������
        }
    }

    // ���� ���������, �� ����� ����������� �������� ����
    for (int i = 0; i < n; i++) {
        double distance = cars[i].tankVolume / (cars[i].fuelUsage / 100);
        if (distance == maxDistance) {  // ���� ���� �� ����������� ��������
            cout << cars[i].brand << " " << cars[i].type << " (" << distance << " ��)" << endl;
        }
    }
}
