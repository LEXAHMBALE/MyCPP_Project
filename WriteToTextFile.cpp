#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myFile ("mySecodText.txt");

    if (myFile.is_open())
    {
        myFile << "This is a line" << endl;
        myFile << "This is another line" << endl;
        myFile.close();
    }
    else
    {
        cout << "unable to open file";
    }

    return 0;
}