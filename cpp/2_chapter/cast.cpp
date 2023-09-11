#include <iostream>
using namespace std;

int main() {
    int intVar = 1500000000; // 1 500 000 000
    intVar = (intVar * 2) / 3; // Слишком большой результат. Если умножить на 10 и разделить на 10 (как в примере в книге), то считает правильно несмотря на то, что после умножения значение переменной выходит за допустимый предел.
    cout << "intVar value: " << intVar << endl; // Неверный результат.

    int secondIntVar = 1500000000;
    secondIntVar = (static_cast<double>(secondIntVar) * 2) / 3; // Приведение к типу double.
    cout << "secondIntVar value: " << secondIntVar << endl; // Верный результат.

    return 0;
}