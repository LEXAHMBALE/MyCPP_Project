#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Please enter an integer value between 5 and 10: ";

    while (!(cin >> userInput) || userInput < 5 || userInput > 10)
    {
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin.clear();
        cin.ignore(INT_MAX), '\n';
    }

    cout << "Your input value " << userInput << " has been accepted." << endl;

    return 0;
}