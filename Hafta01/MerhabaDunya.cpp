#include <iostream>
#include <string>

int topla(int a, int b) { return a + b; }

/**
 * Programın başlangıç yeridir
 * Tamsayı tipinde dönüş yapar
 **/
int main() {
  // int, char, bool, float, double, std::string
  const int a = 5;
  int b;
  //....
  b = 3;

  char c = 'A';
  bool mantiksal = true;
  double d = 3.1415;
  std::string selamlama = "Merhaba!";
  std::string selam2("Merhaba ");
  std::string unlem("!");
  std::string adiniz;

  // Ekrana Merhaba yazdıralım
  std::cout << selamlama << std::endl;

  /*
      Burada birincisatır
      İkinci satır
      ...
  */
  std::cout << topla(a, b) << std::endl;

  std::cout << "Adınız:" << std::endl;
  std::cin >> adiniz;

  std::cout << selam2 << adiniz << unlem << std::endl;

  if (a == 1) {
    std::cout << "A birdir";
  } else if (a == 2) {
    std::cout << "A ikidir";
  } else {
    std::cout << "Bilinmeyen deger" << std::endl;
  }

  return 0;
}