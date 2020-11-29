#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int sum = 0;
    float k;
    cout << "Введите N: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cout << "Введите вещественное число: ";
        cin >> k;
        std::cout << round(k) << endl;
        sum = sum + k;
        cout << "Сумма: " << sum;
    }
    return 0;
}