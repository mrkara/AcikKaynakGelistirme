#include <iostream>
#include <string>

const std::string info = "Bu program kullanicidan 1 ile 10 arasi bir tam sayi girmesini ister ve "
                   "kullanicin tahmininin dogrulugunu test eder.";

int main()
{
    const int tut = 7;
    int tahmin;

    std::cout << info << std::endl;
    std::cout << "1 ile 10 arasi tam sayi giriniz: ";
    std::cin >> tahmin;

    if (tut == tahmin)
    {
        std::cout << "Tebrikler tahmininiz dogru!" << std::endl;
    }

    else
    {
        std::cout << "Tekrar deneyiniz." << std::endl;
    }

    return 0;
}
