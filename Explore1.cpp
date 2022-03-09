#include <iostream>
#include "Point.h"
using namespace std;


int main() {
    // First instance of Point, named a - starts at default 0.0, 0.0
    Point a;
    // Remove the comment below
    //a.x = b.x;
    // Why doesn't it work?
        //It doesn't work because "a" is a private variable and can't be accessed outside of the class.

    // First instance of Point, named a - starts at default 0.0, 0.0
    Point b(4.5, 7.8);

    cout << "Point a: x = ";
      a.print();
    cout << "Point b: x = ";
      b.print();
  cout << endl;

    //a.setX(53);
    //a.setY(51);
    //cout << "Point a: x = " << a.getX() << ", y = " << a.getY() << endl;

    cout << "Point a: ";
    a.print();
    cout << "Point b: ";
    b.print(); 

     //Look! the equal operator still works!

 cout << a.calcDistance(b) << endl;
  
     a = b;
    cout << "Point a: ";
    a.print();

   
  
    // a.setPoints(33.9, 1072.8);
    //cout << "Point a:";
    //a.print();

    return 0;
}


