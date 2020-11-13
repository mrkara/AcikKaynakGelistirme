/*
 * Kullanıcıya bilgi ver
 * Kullanıcıdan sayı iste (örneğin X olsun)
 * Sayı tekse "X sayısı tektir", çiftse "X sayısı çifttir" yazdır
 * Bunu bir döngü içinde yap ve kullanıcı 0 (sıfır) girene kadar devam et
 * Döngüden çıktıktan sonra kullanıcıyı bir mesajla uğurla
 */
#include <iostream> // Girdi-çıktı işlemleri için
#include <string> // Dizge (std::string) sınıfını kullanabilmek için

using namespace std; // Standart sınıfları doğrudan kullanabilmek için ("std::string" yerine sadece "string" gibi)

bool isOdd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEven(int num)
{
    if (num % 2 == 0)
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
    // Kullanıcıyı karşıla
    const string greet("Wellcome!"
                       "This program check the number you entered"
                       "For quit press 0");
    cout << greet << endl;

    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi;
    do
    {
        cout << "Bir sayı giriniz: " << endl;
        cin >> sayi;
        if (isEven(sayi))
        {
            cout << sayi << " bir çift sayıdır\n" << endl;
        }
        else if (isOdd(sayi))
        {
            cout << sayi << " bir tek sayıdır\n" << endl;
        }

    } while (sayi != 0);

    // Kullanıcıyı uğurla
    cout << "\nİyi Günler!\n" << endl;

    return 0;
}