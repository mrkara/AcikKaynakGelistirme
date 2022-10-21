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
    return (num % 2 == 0) ? false : true;
}

bool isEven(int num)
{
    return (num % 2 == 0);
}

int main()
{
    // Kullanıcıyı karşıla
    cout << "Merhaba, tek-çift programına hoşgeldiniz." << endl;
    cout << "0'a basarak programdan çıkabilirsiniz." << endl;
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi = 0;
    do
    {
        cout << "Lütfen bir sayı giriniz: ";
        cin >> sayi;
        cout << "\n";
        if (isOdd(sayi))
        {
            cout << sayi << " sayısı tektir." << endl;
        }
        else if (isEven(sayi))
        {
            cout << sayi << " sayısı çifttir." << endl;
        }
        cout << "\n";
    } while (sayi != 0);
    cout << "Teşekkürler." << endl;
    // Kullanıcıyı uğurla

    return 0;
}
