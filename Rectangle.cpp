#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(Line l, Line h){
  length = l;
  height = h;
}

double Rectangle::calcArea(){
  double area = (length.lineLength())*(height.lineLength());
  return area;
}

void Rectangle::print(){
cout << " Start";
length.print();
cout << " End";
height.print();
cout << endl;
  }