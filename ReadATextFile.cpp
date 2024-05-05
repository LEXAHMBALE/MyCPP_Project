#include <iostream>
#include <fstream>
#include <string>

using namespace std ;
int main () {
    string line;

    ifstream myFile ("mySecodText.txt");

    if (myFile.is_open()){
        while( getline(myFile,line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    else 
    {
        cout << "unable to open file" << endl;

    }

    return 0;
}