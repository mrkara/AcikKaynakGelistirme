/*This program generates a random number each time it runs and asks the user to guess.
If the number inputted by user is equal to the random number, it prints "Congratulations". If not, it prints "Try again".*/

#include <cstdlib>
#include <iostream>
#include <string>

//This function generates a random number between the inputted lowest and highest numbers
int generate_random_number(int lowest, int highest)
{   srand(time(NULL));
    int random_number = rand() % highest + lowest;
    return random_number;
}

//This function checks if the user's guess is equal to random number created by program
void guess_check(int secret_number, int guess)
{
    if (guess == secret_number)
    {
        std::cout << "Congratulations! It was " << secret_number << "." << std::endl;
    }

    else
    {
        std::cout << "Wrong guess. It was " << secret_number << ". Maybe next time." << std::endl;
    }
}

int main(void)
{
    std::string greet = "Hello! I will pick a number between 1 and 20 and you will try to guess.";
    int random_number = generate_random_number(1,20);
    int guess;

    std::cout << greet << std::endl;
    std::cout << "I picked my number, what's your guess?: ";
    std::cin >> guess;
    guess_check(random_number, guess);

    return 0;
}