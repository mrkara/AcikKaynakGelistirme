#include <iostream>
#include <string>

int main() {
  
  int sayi = 6;
  int tahmin;

  std::cout << "Bu programla 1 ile 10 arasında tutulan bir sayıyı tahmin etmeye çalışırsınız."<< std::endl;
  std::cout << "Lütfen 1 ile 10 arasında bir sayı tahmin ediniz." << std::endl;
  std::cout << "Tahmininiz:";

  std::cin >> tahmin; 

  if (tahmin == sayi) {
    std::cout << "Tebrikler! Doğru tahmin!";
  }
  else{
      std::cout << "Yanlış tahmin. Lütfen tekrar deneyiniz.";
  }
  return 0;
}