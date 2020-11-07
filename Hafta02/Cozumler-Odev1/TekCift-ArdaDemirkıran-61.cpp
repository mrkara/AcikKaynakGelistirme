/*
 * Kullanıcıya bilgi ver
 * Kullanıcıdan sayı iste (örneğin X olsun)
 * Sayı tekse "X sayısı tektir", çiftse "X sayısı çifttir" yazdır
 * Bunu bir döngü içinde yap ve kullanıcı 0 (sıfır) girene kadar devam et
 * Döngüden çıktıktan sonra kullanıcıyı bir mesajla uğurla
 */
#include <iostream> // Girdi-çıktı işlemleri için
#include <string> // Dizge (std::string) sınıfını kullanabilmek için

using namespace std; // Standart sınıfları doğrudan kullanabilmek için ("std::string" yerine sadece "string" gibi)

bool isOdd(int num)
{
    if (num%2!=0){
     return true;
 }
    else{
     return false;
 } 
}

bool isEven(int num)
{
    if(num%2==0){
     return true;
 }
     else{
     return false;
 } 
}

int main()
{
    // Kullanıcıyı karşıla
    cout << "Bu program girdiğiniz sayının çift ya da tek olmasını kontrol eder.\nÇıkmak için '0'\n";
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi = 0;
    do
    {
        cout <<"Sayınızı girin:\t";
        cin >> sayi;
        switch (isEven(sayi)){
        case true:
        cout << sayi <<" sayısı çifttir.\n";
}
        switch (isOdd(sayi)){
        case true:
        cout << sayi <<" sayısı tektir.\n";
 }  
    } while (sayi != 0);

    cout << "Programdan çıktınız.\n";

    return 0;
}
