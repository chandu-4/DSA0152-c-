#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;

  public:
    Rectangle(int l, int b) {
      length = l;
      breadth = b;
      cout << "Constructor called" << endl;
    }
    ~Rectangle() {
      cout << "Destructor called" << endl;
    }
    int area() {
      return length * breadth;
    }
};

int main() {
  Rectangle r1(10, 9);
  Rectangle r2(8, 6);

  cout << "Area of r1: " << r1.area() << endl;
  cout << "Area of r2: " << r2.area() << endl;

  return 0;
}
