#include <iostream>
#include <string> 

using namespace std;

int main()
 {
    std :: string strings; 
    int number = 0;

    
    int* dynamicInt = nullptr;
    string* dynamicString = nullptr;

    cout << "type a number" << endl;
    cin >> number;
    cout << "type a string" << endl;
    cin >> strings;

    dynamicInt = new int (number) ;
    dynamicString = new  string (strings) ;


    if (dynamicInt == nullptr){
        cout << "error" << endl;
        return 1;
    }
    if (dynamicString == nullptr){
        cout << "error" << endl;
        return 1;
    }

    cout << "value is:" << dynamicInt << endl;
    cout << "value is:" << dynamicString << endl;
    
    
    return 0;
}