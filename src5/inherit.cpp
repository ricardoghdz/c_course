#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      int getWidth() {
         return width;
      }
      int getHeight() {
         return height;
      }
      int getArea() {
           return 0;
       }

   protected:
      int width;
      int height;


};

// Derived class
class Rectangle: public Shape {
    public:
        int getArea() {
            return height * width;
        }

};

int main(void) {
   Rectangle Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
    Shape s;
    s.setWidth(4);
    s.setHeight(5);

    cout << "El area de s es:" << s.getArea() << endl;

   return 0;
}