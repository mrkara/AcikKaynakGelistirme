/*
* Bu program, 1 ile 10 arasında bir sayı tutar
* kullanıcıdan tamsayı ister
* Değerler eşitse, ekrana, "tebrikler!" yazar
* Değer farklıysa "Tekrar deneyin!" yazar
*/
#include <iostream>
#include <string>

int main()
{
    // sayı tut
    int tut = 7;
    int tahmin = 0;

    // kullanıcıya bilgi ver -> bu program şu işe yarar...
    // kullanıcıdan 1 ile 10 arası sayı girmsini iste
    // sayıyı oku ve tahmin değişkenine ata
    // değerler eşitse tebrik et --> if
    // değilse, tekrar deneyin yaz --> else

    std::cout << "1-10 arasinda bir sayi giriniz: ";

    while (true)
    {
        std::cin >> tahmin;
        if (tahmin > 10 || tahmin < 1)
            std::cout << "Lütfen 1-10 arasinda bir sayi giriniz: ";
        else
        {
            if (tut == tahmin)
            {

                std::cout << "Tebrikler tahmininiz dogru!";
                break;
            }
            else
            {
                std::cout << "Üzgünüm tahmininiz yanlis. Lütfen tekrar deneyiniz!" << std::endl;
                std::cout << "1-10 arasinda bir sayi giriniz: ";
            }
        }
    }
    return 0;
}