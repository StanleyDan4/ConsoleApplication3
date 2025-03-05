#include "zag.h"
#include <iostream>
#include <iomanip> // для управления выводом точности чисел
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus"); // Установка локали для поддержки русского языка
    double x, y, t;
    bool flag = true;
    


    while (flag) {
        // Ввод точности
        cout << "Введите точность: ";
        cin >> t;

        // Ввод двух чисел
        cout << "Введите числа x и y: ";
        cin >> x >> y;

        // Вывод чисел и результата сравнения
        cout << x << " и " << y << ' ';
        if (srav(x, y, t)) {
            cout << "Равны";
        }
        else {
            cout << "Неравны";
        }
        cout << endl;

        // Запрос на повторение или завершение
        cout << "Повторить - 1, закрыть - 0: ";
        cin >> flag;
        cout << endl;
    }

    return 0;
}
