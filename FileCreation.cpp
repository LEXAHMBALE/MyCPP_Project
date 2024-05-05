#include <iostream>
#include <fstream>
using namespace std;

int main (){
    
    ofstream myFile ("myFirstText.txt");

    myFile.close();

    return 0;
}