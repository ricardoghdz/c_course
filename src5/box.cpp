#include<string>
#include <iostream>

using namespace std;

class Caja {
    private:
        float largo;
        float ancho;
        float profundo;

    public:
        void set_largo(float largo) {
            this->largo = largo;
        }
        void set_ancho(float ancho) {
            this->ancho = ancho;
        }
        void set_profundo(float profundo) {
            this->profundo = profundo;
        }
        float get_largo() {
            return this->largo;
        }
        float get_ancho() {
            this->ancho;
        }
        float get_profundo() {
            this->profundo;
        }
        float sacar_volumen() {
            return ancho * largo * profundo;
        }

};

class Perro {

    private:
        //caracteristicas
        string raza;
        string color_pelo;
        string nombre;
    public:
        //comportamiento
        void ladrar() {
            cout<<"guau guau"<< endl;
        }

        void comer() {
            cout<<"Chomp chomp!" << endl;
        }

        void comer(string comida) {
            if(comida == "Croquetas") {
                cout<< "chomp chomp!"<< endl;
            }else {
                cout<< "no me gustan las sobrinas!"<<endl;
            }
        }
};

int main(void) {
    Caja caja1;
    Caja caja2;

    caja1.set_largo(1.2);
    caja1.set_ancho(2.2)  ;
    caja1.set_profundo(3.3);
    cout << "El largo es "<< caja1.get_largo() << ", el ancho es " << caja1.get_ancho() << " y de profundo: "<< caja1.get_profundo() << endl;
    cout<< "El volumen de la caja 1 es: " << caja1.sacar_volumen() << endl;

     caja2.set_largo(3.2);
    caja2.set_ancho(1.2)  ;
    caja2.set_profundo(5.3);
    cout << "El largo es "<< caja2.get_largo() << ", el ancho es " << caja2.get_ancho() << " y de profundo: "<< caja2.get_profundo() << endl;
    cout<< "El volumen de la caja 2 es: " << caja2.sacar_volumen() << endl;
}