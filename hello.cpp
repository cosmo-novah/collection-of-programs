#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter a string: ";

    string input;
    getline(cin, input);

    cout << "The string you inputed is: " << input << endl;

    return 0;
}
