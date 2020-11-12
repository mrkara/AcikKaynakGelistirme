#include <iostream>

using namespace std;

//tek satılar
bool isOdd(int num)
{
    if ((num % 2) == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//çift sayılar
bool isEven(int num)
{
    if ((num % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int sayi = 0;
    do
    {
        cout << "----------" << endl;
        cout << "Sayıyı giriniz(Programdan çıkmak için 0 giriniz)" << endl;
        cin >> sayi;

        if (isOdd(sayi) == true)
        {
            cout << "Sayı Tek" << endl;
        }
        else if (isEven(sayi) == true)
        {
            cout << "Sayı Çift" << endl;
        }

    } while (sayi != 0);

    cout << "Hoşçakal" << endl;

    return 0;
}