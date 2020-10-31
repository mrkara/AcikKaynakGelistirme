#include <iostream>
#include <string>

int main()
{
    int tut = 5;
    int tahmin;
    std::string bilgi = "Bu program kullanıcının bir sayı girmesini bekler ve programın tuttuğu sayıya eşit olup olmadığını kontrol eder.";
    std::cout << "0 ve 10 arasında bir tam sayı giriniz." << std::endl;
    std::cin >> tahmin;

    if (tahmin == tut) {
        std::cout << "Tebrikler!" << std::endl;
    }
    else {
        std::cout << "Tekrar deneyin!" << std::endl;
    }

    return 0;
}