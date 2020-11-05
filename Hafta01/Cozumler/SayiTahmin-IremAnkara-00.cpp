#include <iostream>
#include <string>

int main()
{
    int tut=3;
    int sayi;
    std::cout<<"Bu bir tahmin oyunudur.Programda kayitli sayiyi tahmin etmeye calisiniz. "<<std::endl;
    std::cout<<"Oyuna baslamak icin 1 ile 10 arasinda bir sayi giriniz: "<<std::endl;
    std::cin>>sayi;

    if(tut==sayi)
    {
        std::cout<<"Tebrikler!!! Dogru bildiniz."<<std::endl;
    }
    else 
    {
        std::cout<<"Yanlis deger girdiniz"<<std::endl;
    }
    return 0;
    
}