#include<iostream>
#include <string>


//This is on branch Mon23
 using namespace std;
 int main(void) {
     string nombre = "Pedro";
     string nombre2 = "Pablo";
      string primer_nombre = nombre;

      cout<<" Mi primer nombre es "<< primer_nombre << endl;

     string nombres = nombre + " " + nombre2;
     cout<<"Hello "<< nombres << endl;

     cout<< " Tu nombre tiene " << nombres.size() << " caracteres." << endl;
 }

