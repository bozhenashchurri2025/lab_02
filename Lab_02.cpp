// Щур Божена
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 27

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a;   // вхідний параметр
    double b;   // новий параметр для другого завдання
    double z1;  // результат першого виразу
    double z2;  // результат другого виразу

    cout << "a = ";
    cin >> a;

    cout << "b =";
    cout >> b;

    // Обчислення
    z1 = pow(cos(3.0 * M_PI / 8.0 - a/ 4.0), 2)
         - pow(cos(11.0 * M_PI / 8.0 + a / 4.0), 2);
    z2 = (sqrt(2) / 2.0) * sin(a / 2.0);

    // Вивід
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
