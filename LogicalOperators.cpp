#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int b = 20;
  int c = 5;

  // corrected condition with proper indentation
  if (a && b) {
    cout << "Line 1 - condition is true (a and b are non-zero)" << endl;
  } else {
    cout << "Line 1 - condition is not true" << endl;
  }

  // corrected condition with proper indentation 
  if (a == b) {
    cout << "Line 2 - condition is true (a is equal to b)" << endl;
  } else {
    cout << "Line 2 - condition is not true" << endl;
  }

  // Let's change the values of a and b
  a = 0;
  b = 10;

  // corrected condition with proper indentation 
  if (a && b) {
    cout << "Line 3 - condition is true (a and b are non-zero)" << endl;
  } else {
    cout << "Line 3 - condition is not true" << endl;
  }

  // added an 'else if' to handle the case where a is not zero but b is zero
  if (!a && b) {
   
      cout << "Line 5 - condition is true (a is non-zero and b is zero)" << endl;
  }
  
  

  return 0;
}
