#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "Merhaba bu program 1 ile 10 arasında bir sayı tutar ve senin aklındaki sayı ile "
                 "karsılaştırır."
              << std::endl;
    std::cout << "Lütfen aklındaki sayıyı yaz." << std::endl;
    int akildaki;
burasi:
    int sayi = 3;
    std::cin >> akildaki;

    if (akildaki == sayi)
    {
        std::cout << "Tebrikler bildin!!" << std::endl;
    }
    else
    {
        std::cout << "Bilemedin :'( " << std::endl;
        std::cout << "Tekrar dene. " << std::endl;
        goto burasi;
    }
    return 0;
}