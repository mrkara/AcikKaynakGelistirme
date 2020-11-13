/*
 * Kullanıcıya bilgi ver
 * Kullanıcıdan sayı iste (örneğin X olsun)
 * Sayı tekse "X sayısı tektir", çiftse "X sayısı çifttir" yazdır
 * Bunu bir döngü içinde yap ve kullanıcı 0 (sıfır) girene kadar devam et
 * Döngüden çıktıktan sonra kullanıcıyı bir mesajla uğurla
 */
#include <iostream>
#include <string>

using namespace std;

bool isOdd(int num)
{
    if ((num % 2) != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

bool isEven(int num)
{
    if ((num % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << "Tek çift sayı kontrol sistemine hoşgeldiniz. \n";
    cout << "Çıkmak için 0 yazabilirsiniz. \n";
    int sayi = 0;
    do
    {
        cout << "Öğrenmek istediğiniz sayıyı giriniz:";
        cin >> sayi;
        if (sayi == 0)
        {
            break;
        }

        int con = isEven(sayi);
        switch (con)
        {
            case 0:
                cout << "Girdiğiniz sayi tek \n";
                break;
            case 1:
                cout << "Girdiğiniz sayı çift \n";
                break;
        }

    } while (sayi != 0);

    cout << "İyi günler... \n";

    return 0;
}