#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    short userNumber;

    cout << "Введите число от 1 до 100: ";
    cin >> userNumber;

    if (userNumber >= 1 && userNumber <= 10)
        cout << "Число в диапазоне от\x1b[91m 1 до 10.\x1b[0m"; // \x1b[91m - начать покраску в красный цвет; \x1b[0m - вернуть прежний цвет.
    else if (userNumber >= 11 && userNumber <= 20)
        cout << "Число в диапазоне от\x1b[91m 11 до 20.\x1b[0m";
    else if (userNumber >= 21 && userNumber <= 30)
        cout << "Число в диапазоне от\x1b[91m 21 до 30.\x1b[0m";
    else if (userNumber >= 31 && userNumber <= 40)
        cout << "Число в диапазоне от\x1b[91m 31 до 40.\x1b[0m";
    else if (userNumber >= 41 && userNumber <= 50)
        cout << "Число в диапазоне от\x1b[91m 41 до 50.\x1b[0m";
    else if (userNumber >= 51 && userNumber <= 60)
        cout << "Число в диапазоне от\x1b[91m 51 до 60.\x1b[0m";
    else if (userNumber >= 61 && userNumber <= 70)
        cout << "Число в диапазоне от\x1b[91m 61 до 70.\x1b[0m";
    else if (userNumber >= 71 && userNumber <= 80)
        cout << "Число в диапазоне от\x1b[91m 71 до 80.\x1b[0m";
    else if (userNumber >= 81 && userNumber <= 90)
        cout << "Число в диапазоне от\x1b[91m 81 до 90.\x1b[0m";
    else if (userNumber >= 91 && userNumber <= 100)
        cout << "Число в диапазоне от\x1b[91m 91 до 100.\x1b[0m";
    else if (userNumber < 0) // Число вышло за границы от 1 до 100 - информируем об этом.
        cout << "\x1b[91mОшибка!\x1b[0m Число меньше 0.";
    else if (userNumber == 0)
        cout << "\x1b[91mОшибка!\x1b[0m Число равно 0.";
    else 
        cout << "\x1b[91mОшибка!\x1b[0m Число больше 100."; 

    int _; cin >> _;
    return 0;
}