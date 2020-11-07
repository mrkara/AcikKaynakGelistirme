/*
* Uğurcan ERDOĞAN - Odev "1"
*  7.11.2020
*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int generate() // Generates an integer.
{
  srand(time(NULL));
  return rand() % 10 + 1; // Choose a random integer between 1 and 10.
}

int main() {
  int theNum = generate();
  int theGiven;
  cout << "Please enter an integer between 1 and 10: "
       << endl;

  while (true) {
    cin >> theGiven;
    if (theNum == theGiven) {
      cout << "Congrats! You guessed it!" << endl;
      break;
    } else if (theNum < theGiven) {
      cout << "The answer is wrong. Enter a smaller number! : " << endl;
    } else if (theNum > theGiven) {
      cout << "The answer is wrong. Enter a bigger number! : " << endl;
    }
  }
  return 0;
}
