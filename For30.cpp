#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, n;
    cout << "Введите A: ";
    cin >> a;
    cout << "Введите B: ";
    cin >> b;
    cout << "Введите N>1: ";
    cin >> n;
    cout << "Длинна отрезков равна: " << (b - a) / n << endl; 
    for (int i = 0; i <= n; i++)
    {
        cout << "Значение функции: " << 1 - sin(a + i*((b - a) / n)) << endl;
    }
    return 0;


}
