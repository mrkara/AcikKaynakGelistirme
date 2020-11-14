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
        cout << "Number is an odd";
        return true;
    }
    return false;
}

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number is an even";
        return true;
    }
    return false;
}

int main()
{
    // Kullanıcıyı karşıla
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    cout << "Hello, this program tells you whether the numbers you entered are even or odd until "
            "you enter 0.";
    int sayi = 0;
    do
    {
        cout << "Please enter a number ";
        cin >> sayi;

        isOdd(sayi);
        isEven(sayi);

    } while (sayi != 0);

    // Kullanıcıyı uğurla
    cout << "The program has ended. Exiting...";

    return 0;
}
