#include "Line.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {

  Point c(23,92);
  Point v(45,65);
  
  Line a(c,v);
  //Line b(Point(7,77), Point(128, -92));
  a.print(); 

  cout << "The line length is " << a.lineLength() << endl;
  return 0;
}