#include <iostream>
using namespace std;

int main()
{
    int a=8;
    cout << "Bir sayı giriniz:\n";
    int b;
    cin >> b;
    if (a == b)
    {
        cout << "Tebrikler, sayılar aynı!" << endl;
    }
    else
    {
        cout << "Sayılar aynı değil :/ " << endl;
    }
    

    return 0;
}