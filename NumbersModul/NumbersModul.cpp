#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int number = 0;
    cout << "Введите число: ";
    cin >> number;
    int number1 = number;

    if (number < 0) {
        number1 = -number;
    }

    cout << "Число " << number << " по модулю равно " << number1 << endl;

    // Задержка окна консоли:
    system("pause > nul");
    return 0;
}