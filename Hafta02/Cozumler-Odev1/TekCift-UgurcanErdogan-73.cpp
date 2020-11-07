
#include <iostream>
#include <string>

using namespace std;

string result;

bool isOdd(int num) { return (num % 2 == 1) ? true : false; }

bool isEven(int num) { return (num % 2 == 0) ? true : false; }

int main() {
  cout << "Welcome. Please enter an integer! The program will say that if it "
          "is odd or even."
       << endl;
  int sayi = 0;

  do {
    cin >> sayi;
    if (isEven(sayi) == true) {
      result = " is an even number.";
    } else if (isOdd(sayi) == true) {
      result = " is an odd number.";
    }

    cout << sayi << result << endl;

  } while (sayi != 0);
  cout << "You have entered 0. The program is closing..." << endl;
  return 0;
}