#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Bu program 1 ile 10 arasinda tutulan rastgele sayinin tahmin edilmesini sağlar "
              << std ::endl;

    srand(time(0));

    int rastgeleSayi = rand() % 11;
    int tahmin;

    std ::cout << "1 ile 10 arasinda bir tam sayi tahmin ediniz..: ";
    std ::cin >> tahmin;

    if (tahmin == rastgeleSayi)
    {
        std ::cout << std ::endl << "Tebrikler !";
    }
    else
    {
        std ::cout << std ::endl << "Tekrar deneyin !";
    }

    return 0;
}