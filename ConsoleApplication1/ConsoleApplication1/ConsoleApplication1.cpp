#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    long long n, m;

    cout << "Введіть два числа (кількість цукерок у Сема і Юри): ";
    cin >> n >> m;

    long long step = 0;

    while (n > 0 && m > 0) {
        step++;
        cout << "Крок " << step << ": Сем їсть 1, Юра їсть 1\n";
        n--;
        m--;
        cout << "Залишилось — Сем: " << n << ", Юра: " << m << "\n\n";
    }

    cout << "Залишок: " << (n + m) << " цукерок.\n";

    return 0;
}