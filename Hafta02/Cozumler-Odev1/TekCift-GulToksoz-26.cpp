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
    return(num % 2 != 0);
}

bool isEven(int num)
{
    return(num % 2 == 0);
}

int main()
{
    int sayi;
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    do
    {
        cout << endl << "Bir sayi giriniz..:";
        cin >> sayi;

        if (isOdd(sayi))
        {
            cout << sayi << " sayisi tektir." << endl;
        }

        if (isEven(sayi))
        {
            if (sayi == 0)
                break;

            cout << sayi << " sayisi cifttir." << endl;
        }

    } while (sayi != 0);

    cout << "Program sonlandi Tesekkurler.."; // Kullanıcıyı uğurla

    return 0;
}