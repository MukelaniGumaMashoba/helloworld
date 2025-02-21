#include <iostream>
#include <vector>
#include <ctime>

std::string names(std::string name1, std::string name2);
// unser function
void happyBirthday()
{
    std::cout << "Happy Birthday!" << '\n';
}


int main()
{
    srand(time(NULL));
    int number = rand() % 20 + 1;
    happyBirthday();

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

    std::string name1;
    std::string name2;

    std::cout << "Enter your first name: ";
    std::cin >> name1;
    std::cout << "Enter your last name: ";
    std::cin >> name2;

    std::cout << "Your full name is: " << names(name1, name2) << '\n';
    return 0;
}

std::string names(std::string name1, std::string name2)
{
    return name1 + " " + name2;

}