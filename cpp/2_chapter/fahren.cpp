#include <iostream>
using namespace std;

int main() {
    int ftemp; // температура по Фаренгейту
    cout << "Enter temperature value in Fahrenheit: ";
    cin >> ftemp;
    
    int ctemp = (ftemp - 32) * 5 / 9; // Выдаёт в ответе значение "-17", если на вход от пользователя поступила строка. Вне зависимости от длины строки.
    cout << "Temperature in Celsius: " << ctemp << '\n';

    return 0;
}