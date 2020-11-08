#include <iostream>
#include <string>

int main()
{
    int kullanicitahmin;
    std::string selamlama = "Merhaba! ";
    std::string adiniz;
    std::string unlem = "!";
    std::string baslangic = "Hadi başlayalım:";
    std::string aciklama = "Şimdi aklımdan 1 ile 10 arasında bir sayı tutacağım. Eğer tuttuğum "
                           "sayıyı doğru tahmin edebilirsen ödül senin olacak!";

    std::cout << selamlama << std::endl;
    std::cout << "Adınız:" << std::endl;
    std::cin >> adiniz;
    std::cout << "Hoş geldin " << adiniz << unlem << std::endl;
    std::cout << aciklama << std::endl;
    std::cout << baslangic << std::endl;
    std::cin >> kullanicitahmin;

    if (kullanicitahmin == 1)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 2)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 3)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 4)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 5)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 6)
    {
        std::cout << "Tebrikler, doğru bildiniz!";
    }
    else if (kullanicitahmin == 7)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 8)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 9)
    {
        std::cout << "Tekrar deneyin!";
    }
    else if (kullanicitahmin == 10)
    {
        std::cout << "Tekrar deneyin!";
    }

    return 0;
}
