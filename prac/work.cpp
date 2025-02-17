#include <iostream>
#include <vector>
#include <ctime>

int main()
{

    int number;
    srand(time(NULL));

    number = rand() % 20 + 1;

    int userInput;
    std::cout << "Enter a number between 1 and 20: ";
    std::cin >> userInput;

    if (userInput == number)
    {
        std::cout << "You guessed it right!" << '\n';
    }
    else if (userInput > number)
    {
        std::cout << "You guessed too high!" << '\n';
    }
    else
    {
        std::cout << "You guessed too low!" << '\n';
    }
    std::cout << number << '\n';
    return 0;
}