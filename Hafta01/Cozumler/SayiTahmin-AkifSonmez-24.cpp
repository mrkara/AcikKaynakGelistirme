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
    std::cout
        << "Bu program, 1 ile 10 arasında bir sayı tutar\nkullanıcıdan tamsayı ister\nDeğerler "
           "eşitse, ekrana, \"tebrikler!\" yazar Değer farklıysa \"Tekrar deneyin!\" yazar"
        << std::endl;

    // kullanıcıdan 1 ile 10 arası sayı girmsini iste
    std::cout << "1 ile 10 arasından bir sayı giriniz..." << std::endl;

    // sayıyı oku ve tahmin değişkenine ata
    std::cin >> tahmin;

    // değerler eşitse tebrik et --> if
    if (tut == tahmin)
    {
        std::cout << "tebrikler!" << std::endl;
    }
    // değilse, tekrar deneyin yaz --> else
    else
    {
        std::cout << "Tekrar deneyin!" << std::endl;
    }

    return 0;
}
