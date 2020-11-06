#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  

    int x,a;

    srand(time(0));
    x=rand() %100;
   
  

while (true) {
    std::cout << "0-99 arasında bir değer girin." << std::endl;
    std::cin >> a;

   // std::cout << x << std::endl;
    if(a==x)
    {
        std::cout << "Tebrikler" << std::endl;
        break;
    }
    else if(a<=x)
    {
        std::cout << "Daha büyük bir sayı girin" << std::endl;
    }
    else if (a>=x) {
        std::cout << "Daha küçük bir sayı girin" << std::endl;
    }
   
    
}
    return 0;

}
