#include "iostream"
#include "string.h"

using namespace std;

  //This es un puntero, por lo que se usa "->"

class Caja{
    private:
        float largo;
        float ancho;
        float profundo;

    public:
        Caja(){//Constructor, no llevan void ni parametros por ser constructor
            largo = 1.0;
            ancho = 1.0;
            profundo = 1.0;
        }
        Caja(float l, float a, float p){//Constructor con parametros
            largo = l;
            ancho = a;
            profundo = p;
        }
        Caja operator+(const box& b){//Operador que suma
            Caja box;
            Caja.set_largo(this->largo + b.largo);//la b es por la referencia que se esta pasando
            Caja.set_ancho(this->ancho + b.ancho);
            Caja.set_profundo(this->profundo + b.profundo);
            return box;
        }
        void set_largo(float largo){
            this->largo = largo;
        }
        void set_ancho(float ancho){
            this->ancho = largo;
        }
        void set_profundo(float profundo){
            this->profundo = profundo;
        }
        float get_largo(){
            return this->largo;
        }
        float get_ancho(){
            return this->ancho;
        }
        float get_profundo(){
            return this->profundo;
        }
        float sacar_volumen(){
            return largo * ancho * profundo;
        }
};

/*class Perro{
    public:
        //Caracteristicas
        string raza;
        string color_pelo;
        string nombre;

        //Comportamiento
        void ladrar(){
            cout << "Guau guau" << endl;
        }
        void comer(){
            cout << "Chomp chomp!" << endl;
        }
        void comer(string comida){
            if(comida == "Croquetas"){
                cout << "Chomp chomp!" << endl;
            }else {
                cout << "no me gustan las sobrinas!" << endl;
            }
        }
};*/

int main(){
    Caja caja1;
    Caja caja2(1.0,2.0,3.0);
    Caja caja3 = caja1 + caja2;

    /*caja1.set_largo(1.2);
    caja1.set_ancho(2.2);
    caja1.set_profundo(3.3);*/
    cout << "El largo es: " << caja1.get_largo() << " , el ancho es: " << caja1.get_ancho() << " , la profundidad es: " << caja1.get_profundo() << endl;
    cout << "El volumen de la caja 1 es : " << caja1.sacar_volumen() << endl;

    /*caja2.set_largo(1.2);
    caja2.set_ancho(2.2);
    caja2.set_profundo(3.3);*/
    cout << "El largo es: " << caja2.get_largo() << " , el ancho es: " << caja2.get_ancho() << " , la profundidad es: " << caja2.get_profundo() << endl;
    cout << "El volumen de la caja 1 es : " << caja2.sacar_volumen() << endl;
}