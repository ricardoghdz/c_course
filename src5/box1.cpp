#include<string>
#include <iostream>

using namespace std;

class Caja {//This es un puntero, por lo que se usa "->", this le indica al programa que se trabaja en ese objeto
    private:
        float largo;
        float ancho;
        float profundo;

    public:
        Caja() {
            cout<< "Llamando el constructor"<<endl;
            largo = 1.0;
            ancho = 1.0;
            profundo = 1.0;
        }
        Caja(float l, float a, float p) {
            cout<< "Llamando el constructor con parametros."<<endl;
            largo = l;
            ancho = a;
            profundo = p;
        }
        ~Caja() {
            cout << "Llamando el destroyer! "<<endl;
        }
        void set_largo(float l) {
            this->largo = l;
        }
        void set_ancho(float a) {
            this->ancho = a;
        }
        void set_profundo(float p) {
            this->profundo = p;
        }
        float get_largo() {
            return this->largo;
        }
        float get_ancho() {
            return this->ancho;
        }
        float get_profundo() {
            return this->profundo;
        }
        float sacar_volumen() {
            return ancho * largo * profundo;
        }


};

int main(void) {
    Caja caja1;
    Caja caja2(2.1, 2.2, 2.3);


    cout << "El largo es "<< caja1.get_largo() << ", el ancho es " << caja1.get_ancho() << " y de profundo: "<< caja1.get_profundo() << endl;
    cout<< "El volumen de la caja 1 es: " << caja1.sacar_volumen() << endl;


    cout << "El largo es "<< caja2.get_largo() << ", el ancho es " << caja2.get_ancho() << " y de profundo: "<< caja2.get_profundo() << endl;
    cout<< "El volumen de la caja 2 es: " << caja2.sacar_volumen() << endl;
}
