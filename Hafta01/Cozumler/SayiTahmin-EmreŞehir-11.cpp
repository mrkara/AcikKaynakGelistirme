#include <iostream>
#include <string>
#include <ctime>

int sayitut()    //sayı üretir
{
int enfazla = 10;
int enaz = 1;
srand(time(NULL));
return rand() %10+1;   //1 ila 10 aralığını belirtir

}

int main()
{
int x = sayitut();
int sayi;  //girilecek sayı değişkeni
std::cout << "Merhaba, lütfen 1 ile 10 arasında bir sayı giriniz:" << std::endl; //kullanıcıya ne yapılacağı söylenir
std::cin >> sayi;
if(sayi == x)   // kullanıcıya feedback verilir
    {std::cout << "Tebrikler! Doğru cevap." << std::endl;
        return 0;
    }
else
    std::cout << "Üzgünüm yanlış cevap." << "Lütfen başka bir sayı giriniz:" << std::endl;
    std::cin >> sayi;
        if(sayi == x)
            {std::cout << "Tebrikler! Doğru cevap." << std::endl;
                return 0;
            }
        else
            std::cout << "Üzgünüm yanlış cevap." << "Lütfen başka bir sayı giriniz:" << std::endl;
            std::cin >> sayi;
                if(sayi == x)
                    {std::cout << "Tebrikler! Doğru cevap." << std::endl;
                        return 0;
                    }
                else
                    std::cout << "Üzgünüm yanlış cevap." << "Tutulan sayı:" << x << " idi." << std::endl; //kullanıcıya 3. hakkında da doğru bilemezse doğru cevap verilir.
            
        

return 0;  

}
