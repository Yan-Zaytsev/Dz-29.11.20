#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите N(>1): ";
    cin >> n;
    int k = 1;
    int sum = 1;
    while ((sum + k + 1) <= n)
    {
        k++;
        sum = sum + k;
    }
    cout << "Наибольшее из целых чисел K: " << k << endl << "Сумма: " << sum;
    


    return 0;


}