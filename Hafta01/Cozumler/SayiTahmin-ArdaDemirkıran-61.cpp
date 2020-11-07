#include <iostream>
#include <string>

int main()
{
    int ilk = 6;
    int tahmin;
    std::cout << "Bu program hafızasındaki sayı ile sizin girdiğiniz sayıyı karşılaştırır.\n";
    std::cout << "1-10 arasında bir sayı girin:\t";
    std::cin >> tahmin;
    if (tahmin == ilk){
        std::cout << "Tebrikler sayınız doğru!\n";
    }
    else{
        std::cout <<"Doğru sayıyı bulamadınız lütfen tekrar deneyin.\n";
    }
    return 0;
}
