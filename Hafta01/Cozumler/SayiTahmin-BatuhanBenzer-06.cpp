#include <iostream>
#include <string>

int main()
{
    std::string name;
    int num = 6;
    int guess;

    std::cout << "Merhabalar, sayi tahmin oyununa hosgeldin. Oncelikle ismini ogrenelim: \n";
    std::cin >> name;

    std::cout << "Tekrardan hosgeldin " + name + ". Simdi oyuna baslayabiliriz.";
    std::cout << "Tahmin etmen gereken sayi 1-10 arasinda.\n";

    while (true)
    {
        std::cout << "Tahminini gir : ";
        std::cin >> guess;

        if (guess == num)
        {
            std::cout << "Tebrikler dogru tahmin ettin!!";
            break;
        }
        else
        {
            std::cout << "Tahminin yanlis. Lutfen tekrar dene.\n";
        }
    }
}
