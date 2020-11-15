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
    //TODO: Implement
    if (num % 2 == 1)
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
    //TODO: Implement
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
    cout << "Merhaba bu program girdiğiniz sayının tek mi yoksa çift mi olduğunu söyler. Eğer "
            "programdan çıkmak isterseniz '0' değerini giriniz.\nProgram başladı."
         << endl;
    // Kullanıcıyı karşıla
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi;

    do
    {
        cout << "Sonraki sayiyi giriniz." << endl;
        cin >> sayi;
        //TODO: Implement
        if (isEven(sayi))
        {
            cout << sayi << " sayısı çifttir." << endl;
        }
        else if (isOdd(sayi))
        {
            cout << sayi << " sayısı tektir." << endl;
        }
        else
        {
            cout << "HATA!" << endl;
        }

    } while (sayi != 0);

    cout << "Programı kullandığın için teşekkürler! Görüşürüz!" << endl;

    // Kullanıcıyı uğurla

    return 0;
}