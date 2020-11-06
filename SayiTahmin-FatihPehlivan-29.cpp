#include <iostream>

using namespace std;

int main(){
    // tut ve tahmin değişkenlerini integer olarak ayarladım
    int tut,tahmin;
    // tut değerini yazdım
    tut = 7;
    // input metnini girdim
    cout << "1-10 arasında bir sayı giriniz: ";
    // kullanıcıdan input aldım
    cin >> tahmin;
    // değerleri kontrol ediyorum
    if (tut == tahmin){
        cout << "TEBRİKLER" << endl;
    }
    else {
        cout << "Tekrar Deneyiniz" << endl;
    }
    return 0;
}