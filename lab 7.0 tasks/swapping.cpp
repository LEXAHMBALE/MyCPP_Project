#include <iostream>

using namespace std;

void SwapNumbers(int& varA, int& varB)
     {
  int temp = varA;
  varA = varB;
  varB = temp;
}

int swap();
int main(){
    int varA = 25;
    int varB = 100;
    

    cout << "VarA before swap:" << varA << endl;
    cout << "VarB before swap:" << varB << endl;

    SwapNumbers(varA, varB);


    cout << "VarA after swap:" << varA << endl;
    cout << "VarB after swap:" << varB<< endl;


    return 0;
}