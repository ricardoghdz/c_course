#include <iostream>

using namespace std;

// Base class
class Animal {
   public:
      void setName(string n) {
         name = n;
      }
      void setWeight(string w) {
         weight = w;
      }
      string getName() {
         return name;
      }
      string getWeight() {
         return weight;
      }
      string print() {
           return name + " weighs " + weight + " kilos.\n";
       }

       void eat() {
            cout<< " chomp chomp!." << endl;
        }

   protected:
      string name;
      string weight;


};

// Derived class
class Lion: public Animal {
    public:
        void speak() {
            cout<< "Roar!"<<endl;
        }

        void eat() {
            cout<< " I only eat the most selected zebras." << endl;
        }

};

int main(void) {
    Animal a;
    a.setName("Firulais");
    a.setWeight("15");
    a.eat();
    cout<< a.print();

     Lion l;
    l.setName("Alex");
    l.setWeight("250");
    l.eat();
    cout<< l.print();

   return 0;
}