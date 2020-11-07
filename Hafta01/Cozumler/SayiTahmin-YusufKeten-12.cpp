/*
 * Bu program, 1 ile 10 arasında bir sayı tutar
 * kullanıcıdan tamsayı ister
 * Değerler eşitse, ekrana, "tebrikler!" yazar
 * Değer farklıysa "Tekrar deneyin!" yazar
 */
#include <iostream>
#include <string>

const std::string aciklama = "Bu program, 1 ile 10 arasında bir sayı tutar ve "
                             "kullanıcıdan tamsayı ister\nDeğerler eşitse, ekrana, "
                             "'Tebrikler!' yazar\nDeğer farklıysa 'Tekrar deneyin!' "
                             "yazar\n";

int main() {
    // sayı tut
        int tut = 7;
        int tahmin;

    // kullanıcıya bilgi ver -> bu program şu işe yarar...
std::cout << aciklama;
// kullanıcıdan 1 ile 10 arası sayı girmsini iste
std::cout << "Şimdi lütfen 1-10 arasında bir sayı giriniz" << std::endl;
// sayıyı oku ve tahmin değişkenine ata
    std::cin >> tahmin;
    // değerler eşitse tebrik et --> if
    if (tahmin == tut)
    {
        std::cout << "Tebrikler!" << std::endl;
    }

    // değilse, tekrar deneyin yaz --> else
    else
    {
        std::cout << "Tekrar deneyin!" << std::endl;
    }
    return 0;
}
