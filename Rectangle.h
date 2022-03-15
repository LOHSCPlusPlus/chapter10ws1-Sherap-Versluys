#include "Line.h"

class Rectangle{
  public:
    Rectangle(Line l, Line h);
    double calcArea();
    void print();
  private:
    Line length;
    Line height;
};