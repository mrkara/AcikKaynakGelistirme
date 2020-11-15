#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string kullanici;
int giris;
int main()
{
    cout << "Lütfen kullanıcı adı girin: ";
    cin >> kullanici;
    cout << "Merhaba " << kullanici << "." << endl;
    cout << "Benim görevim, sisteme girdiğin bir tam sayının tek mi çift mi olduğunu sana söylemek."
         << endl;
    cout << "Devam etmek için lütfen bir tam sayı gir: ";
    cin >> giris;

    while (giris != 0)
    {
        switch (giris % 2)
        {
            case 0:
                cout << kullanici << ", girdiğin sayı çift. Bir sayı daha gir: ";
                cin >> giris;
                break;
            case 1:
                cout << kullanici << ", girdiğin sayı tek. Bir sayı daha gir: ";
                cin >> giris;
                break;
            case -1:
                cout << kullanici << ", girdiğin sayı tek. Bir sayı daha gir: ";
                cin >> giris;
                break;
            default:;
        }
    }
    cout << "Program sonlandı " << kullanici << ". Görüşmek üzere." << endl;
    return 0;
}
