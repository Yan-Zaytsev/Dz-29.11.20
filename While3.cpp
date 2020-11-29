#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int n, k;
    int c = 0;
    cout << "Введите N: ";
    cin >> n;
    cout << "Введите K: ";
    cin >> k;
    while (n >= k)
    {
        c = c + 1;
        n = n - k;
        
    }
    cout << "Частное: " << c << endl << "Остаток: " << n;
    
    return 0;


}