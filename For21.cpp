
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    float sum = 1, fac = 1;
    cout << "Введите N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
        sum = (sum + 1) / fac;
    }
    cout << "Сумма равняется: " << fac; 
    return 0; 
   
}


