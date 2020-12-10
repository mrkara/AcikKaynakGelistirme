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
    if (num % 2 == 1)
    {
        return true;
    }
    return false;
}

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
    // Kullanıcıyı karşıla
    cout << "Hoşgeldiniz! Bir sayı giriniz: \n";
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi = 0;
    do
    {
        cin >> sayi;
        if (isOdd(sayi) == true)
        {
            cout << "X sayısı tektir" << endl;
        }
        else if (isEven(sayi) == true)
        {
            cout << "X sayısı çifttir" << endl;
        }
    } while (sayi != 0);
    // Kullanıcıyı uğurla
    cout << "Tekrar görüşmek dileğiyle..." << endl;
    return 0;
}