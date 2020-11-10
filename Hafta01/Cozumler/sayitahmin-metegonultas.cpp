
#include <iostream>
#include <ostream>
#include <string>

int main()
{
    int tut = 8;
    int tahmin;

    std::cout << "Tahmininiz: ";
    std::cin >> tahmin;

    if (tahmin == tut)
    {
        std::cout << "Tebrikler,bildiniz" << std::endl;
    }
    else
    {
        std::cout << "Tekrar deneyin" << std::endl;
    }
}