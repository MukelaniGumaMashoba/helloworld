#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

void showBalance(double bankBalance);
double deposit(double bankBalance);
double withdraw(double balance);

int main()
{
    double bankBalance = 0;
    int userChoice = 0;

    int numbers[] = {1, 2, 3, 4, 5};

    // for(int number : numbers)
    // {
    //     cout << number << '\n';
    // }

    int total = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        total += numbers[i];
        // cout << numbers[i] << '\n';
    }
    cout << "Total: " << total << '\n';

    do
    {
        cout << "Welcome to the banking system!" << '\n';
        cout << "\nMenu:\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cout << "Enter Choice: " << '\n';
        std::cin >> userChoice;

        switch (userChoice)
        {
        case 1:
            showBalance(bankBalance);
            break;
        case 2:
            bankBalance += deposit(bankBalance);
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
    std::cout << "Your balance is: R" << bankBalance << '\n';
}

double deposit(double bankBalance)
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
    return withdraw;
}