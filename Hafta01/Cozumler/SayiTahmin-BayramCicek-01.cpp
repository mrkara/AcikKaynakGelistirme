/*
* Bu program, 1 ile 10 arasında bir sayı tutar
* kullanıcıdan tamsayı ister
* Değerler eşitse, ekrana, "tebrikler!" yazar
* Değer farklıysa "Tekrar deneyin!" yazar
*/

#include <iostream>
#include <string>

void compare(int tahmin, int tut)
{
    if (tahmin == tut)
        std::cout << "Tebrikler!" << std::endl;
    else
        std::cout << "Tekrar deneyin!" << std::endl;
}

int main(int argc, char** argv)
{
    // sayı tut
    const int tut = 7;
    int tahmin;
    const std::string message = "Bu program [1, 10] aralığında bir sayı tutar.\n"
                                "Girilen sayının programın tuttuğu sayıya\n"
                                "eşit olup olmadığını kontrol eder.\n";

    // bilgi ver
    std::cout << message << std::endl;

    // kullanıcı tahminini al
    std::cout << "[1, 10] arası bir tam sayı giriniz: ";
    std::cin >> tahmin;

    // karşılaştır
    compare(tahmin, tut);

    return 0;
}
