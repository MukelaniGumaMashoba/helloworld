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

    int a = 5;
    cout << a;
    // variables int, float, double, char, string
    return 0;
}