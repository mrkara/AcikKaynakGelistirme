#include <iostream>
#include <string>

int main()
{
    const int tut = 5;
    int tahmin;
    
    const std::string bilgi = "Bu program kullanıcının bir sayı girmesini bekler ve "
    "bu sayının, programın tuttuğu sayıya eşit olup olmadığını kontrol eder.";
    
    std::cout << bilgi << std::endl;
    std::cout << "0 ve 10 arasında bir tam sayı giriniz." << std::endl;
    std::cin >> tahmin;

    if (tahmin > 10) {
        std::cout << "Lütfen 10'dan büyük sayı girmeyiniz." << std::endl;
    }
    else if (tahmin < 0) {
        std::cout << "Lütfen negatif sayılar girmeyiniz." << std::endl;
    }
    else {
        if (tahmin == tut) {
            std::cout << "Tebrikler!" << std::endl;
        }
        else {
            std::cout << "Tekrar deneyin!" << std::endl;
        }
    }
    
    return 0;
}
