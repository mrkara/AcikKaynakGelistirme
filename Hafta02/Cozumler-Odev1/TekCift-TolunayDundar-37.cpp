/*--------------------------------------------------------------------------------
This program asks for a number from user and checks if that number is even or odd.
It prints "X is odd." if the number is odd, or "X is even." if the number is even.
The program runs until the user terminates it by inputting "q".
----------------------------------------------------------------------------------
See line 46 for possible bug
--------------------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int isEvenOrOdd(int num);
void process(int input);

int main()
{
    const char* greet = "-----------------------------------------------------------\n"
                        "Hello! Please input a number to check if it is odd or even.\n"
                        "('q' to terminate the program)\n"
                        "-----------------------------------------------------------\n";

    cout << greet;

    string input;

    do
    {
        cout << "Input: ";
        cin >> input;

        //Terminates the program if 'q' or 'Q' is inputted
        if (input == "q" || input == "Q")
        {
            cout << "You have terminated the program.\n";
            break;
        }

        else
        {
            //Tries to convert the string input to integer and prints "Invalid input!" if it fails
            try
            {
                //stoi func converts a str to int but it doesn't throw exception while converting str "123abc" to int 123
                int num = stoi(input);
                process(num);
            }

            catch (exception)
            {
                cout << "Invalid input!\n\n";
            }
        }
    }

    while (input != "q");

    return 0;
}

/*This function checks if the inputted number is an odd or even number
and it returns 1 if the number is even or 2 if the number is odd*/
int isEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }

    else
    {
        return 2;
    }
}

//This function calls the isEvenOrOdd function and prints the result
void process(int input)
{
    int result = isEvenOrOdd(input);

    switch (result)
    {
        case 1:
            cout << input << " is even.\n\n";
            break;

        case 2:
            cout << input << " is odd.\n\n";
            break;
    }
}