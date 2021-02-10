#include <iostream>
#include <string>

#include "alloctrack.hpp"

struct point {
  int x;
  int y;
} typedef point;

using namespace std;

int main(int argc, char **argv){
  point* p1 = new point;
  point* p2 = new point;
  p1->x = 5;
  p1->y = 10;
  p2->x = 50;
  p2->y = 100;
  mem::debuggerPrintMissingAllocations();
  return 0;
}