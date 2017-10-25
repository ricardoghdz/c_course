#include "iostream"
#include "string"

using namespace std;

int main (){
    string nombre = "Pedro";
    string nombre2 = "Pablo";
    string primer_nombre = nombre;

    cout << "Mi primer nombre es " << nombre << endl;

    string nombres = nombre + " " + nombre2;
    cout << "Hello " << nombres << endl;
    cout << "Tu nombre tiene " << primer_nombre(sizeof) << "caracteres." << endl;
}