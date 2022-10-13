#include <iostream>
using namespace std;

int Reverse(int n)
{
    int reverse = 0;
    while (n) {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    return reverse;
}

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Перевёрнутое число: " << Reverse(n) << endl;
    if (n == Reverse(n))
        cout << "Число палиднром" << endl;
    else 
        cout << "Число не палиднром" << endl;

    return 0;
}