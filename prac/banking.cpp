#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

void showBalance(double bankBalance);
double deposit();
double withdraw(double balance);

int main()
{
    double bankBalance = 0;
    char userChoice = 0;

    std::cout << "Welcome to the banking system!" << '\n';
    std::cout << "Enter Choice: " << '\n';
    getline(std::cin, userChoice);

    do
    {
        switch (userChoice)
        {
        case 1:
            showBalance(bankBalance);
            break;
        case 2:
            bankBalance += deposit();
            break;
        case 3:
            bankBalance -= withdraw(bankBalance);
            break;
        default:
            std::cout << "Invalid choice!" << '\n';
        }

    } while (userChoice != 4);

    return 0;
}

void showBalance(double bankBalance)
{
    std::cout << "Your balance is: R" << std::setprecision(2) << bankBalance << '\n';
}


double deposit()
{
    double deposit;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> deposit;
    
    return deposit;
};

double withdraw(double balance)
{
    double withdraw;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> withdraw;
    balance = balance - withdraw;
    return 0;
}