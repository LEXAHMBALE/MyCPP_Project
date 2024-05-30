# pragma once

#include<iostream>

using namespace std;

class Box {

    public:
      Box();

      Box(const double newlength, const double newBreadth, const double newHeight);
      // destructor
      ~Box();
      // accessor methods
       double GetVolume();

       void SetLength(double len);

       void SetBreadth(double bre);

       void SetHeight(double hei);

       // overload + operator to add two Box objects
       Box operator+(const Box& b);

    private:
       double length;
       double breadth;
       double height;

};