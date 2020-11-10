#include <iostream>
#include <string>

int main()

{
    int makine = 5;
    int kullanici_tahmin;
    std::string kullanici;

    std::cout << "Merhaba, sana daha iyi hitap edebilmem için lütfen ismini gir" << std::endl;
    std::cin >> kullanici;
    std::cout << "Merhaba " << kullanici;
    std::cout << ", şimdi seninle ufak bir sayı tahmin oyunu oynayacağız. Senden 1 ile 10 arasında "
                 "bir sayı girmeni istiyorum."
              << std::endl;
    std::cout
        << "Eğer benim aklımdaki sayıyı girersen kazanırsın, başka bir sayı girersen kaybedersin."
        << std::endl;
    std::cout << "Lütfen aklındaki sayıyı gir: ";
    std::cin >> kullanici_tahmin;

    if (kullanici_tahmin == makine)
    {
        std::cout << "TEBRİKLER " + kullanici << std::endl;
        return 0;
    }

    else
        (kullanici_tahmin = makine);
    {
        std::cout << "LÜTFEN TEKRAR DENE " + kullanici << std::endl;
        return 0;
    }
}