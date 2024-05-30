// main function for the program
#include "Box.cpp"  // this work only with extension .cpp not .h
#include<iostream>

using namespace std;

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);
     
     //volume of the box 1
     volume = Box1.GetVolume();
     cout << "volume of box 1: "<<volume<<endl;

     //volume of box 2
     volume = Box2.GetVolume();
     cout << "volume of box 2: "<<volume<<endl;

     // add two objects as follows
     Box3 = Box1 + Box2;

     // volume of box 3
     volume = Box3.GetVolume();
     cout << "volume of box 3 : " << volume << endl;

    return 0;
}