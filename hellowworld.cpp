#include <iostream>
#include <vector>

int main()
{
    using std::cout;
    using std::string;
    // std : standard namespace, cout : console output
    // always return 0 if the program is executed successfully and 1 if not
    cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << '\n';

    // cout << is for output
    //  cin >> is for user input
    string name;
    std::cout << "Enter your name ";
    // std::getLine(std::cin >> std::ws, name);

    int a = 5;
    cout << a << '\n';
    // variables int, float, double, char, string
    double students;
    students = 5.5;
    int num = (int)students;
    cout << num;

    // arrays
    std::string names[] = {"John", "Doe", "Jane", "Doe", "James"};
    std::cout << names[0] << '\n';
// sizeof(names) / sizeof(names[0]) gives the number of elements in the array
    return 0;
}