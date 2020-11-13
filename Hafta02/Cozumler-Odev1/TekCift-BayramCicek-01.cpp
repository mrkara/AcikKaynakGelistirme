#include <iostream>
#include <string>

using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    string message = "Bu program, girilen sayının tek veya çift\n"
                     "olup olmadığını gösterir.\n"
                     "0(sıfır) girilince programdan çıkar.\n";
    cout << message;

    int sayi = 0;
    do
    {
        cout << "Bir tam sayı giriniz: ";
        cin >> sayi;

        if (isEven(sayi))
        {
            cout << "Çift\n";
        }
        else
            cout << "Tek\n";

    } while (sayi != 0);

    cout << "\nProgram sonlanmıştır.\n";

    return 0;
}