#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {

  Point a(14,14);
  Point b(42,91);
  Line h(a,b);

  Point c(53,12);
  Point d(86,10);
  Line l(c,d);

  Rectangle r(l,h);
  
r.print();
  cout << r.calcArea();
    return 0;
}
