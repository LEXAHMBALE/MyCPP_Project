#include <iostream>
using namespace std;

int main() {
  int a = 21;
  int b = 10;
  int c;

  if (a == b) {
    cout << "Line 1a is equal to b" << endl;
  } else {
    cout << "Line 1a is not equal to b" << endl;
  }

  if (a < b) {
    cout << "Line 2a is less than b" << endl;
  } else {
    cout << "Line 2a is not less than b" << endl;
  }

  if (a > b) {
    cout << "Line 3a is greater than b" << endl;
  } else {
    cout << "Line 3a is not greater than b" << endl;
  }

  b = 20;
  cout << "Line 4a is either less than or equal to b" << endl;

  if (a <= b) {
    cout << "Line 5a is either greater than or equal to b" << endl;
  }

  return 0;
}
