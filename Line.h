#include "Point.h"
using namespace std;

class Line {
  public:
    Line();
    Line(Point s, Point e);
    void print();
    double lineLength();
  private:
    Point start;
    Point end;
};