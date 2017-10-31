        /*
        Hacer un programa que sirva para reservar vuelos.
        Las opciones que tiene un usuario son:
        a) buscar vuelos.
          * Indicar fecha de salida
          * Indicar Origen
          * Indicar destino
          * el sistema retorna una lista de vuelos.
          * el usuario elige un vuelo
          * el sistema confirma la reservacion y vuelve al menu original.
          * en cualquier momento, el usuario puede elegir la opcion 0 y volver al menu anterior.
        b) mostrar reservaciones pendientes
        c) mostrar vuelos pasados.
        */

        #include<iostream>
        #include<fstream>
        #include<string>

        using namespace std;
        class Usuario {
            private:
                int clave_usuario;
                string nombre;
                string apellido;
                string celular;
            public:
                Usuario(int clave, string nom, string ape, string cel) {
                    clave_usuario = clave;
                    nombre = nom;
                    apellido = ape;
                    celular = cel;
                }
                Usuario() {
                }

        };

        class Dates {
            private:
                int year;
                int month;
                int day;
            public:
                Dates() {
            day = 12;
            month = 11;
            year = 2017;
        }
        Dates(int d, int m, int y) {
                //check the month
                if(m >= 1 && m <= 12) {
                    month = m;
                }
                else {
                    month = 0;
                }
                if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                    if(d >= 1 && d <= 31) {
                        day = d;
                    }
                    else {
                        day = 0;
                    }
                }
                else if(m != 2) {
                    if(d >= 1 && d <= 30 ) {
                        day = d;
                    }
                    else {
                        day = 0;
                    }
                }
                else {
                    if(d >= 1 && d <= 28 ) {
                        day = d;
                    }
                    else {
                        day = 0;
                    }
                }
                if(y >= 2017 && y <= 2032) {
                    year = y;
                }
                else {
                    year = 0;
                }
            }

        };


        class Vuelo {
            private:
                int clave_vuelo;
                string origen;
                string destino;
                Dates fecha;
                int asientos_disponibles;
            public:
                Vuelo(int clave, string ori, string dest, Dates fec, int asi_disp) {
                clave_vuelo = clave;
                origen = ori;
                destino = dest;
                fecha = fec;
                asientos_disponibles = asi_disp;
            }
            Vuelo() {

            }
        };

        class Reservacion {
            private:
                int clave_vuelo;
                int clave_usuario;

            public:
                Reservacion(int cv, int cu) {
                    clave_vuelo = cv;
                    clave_usuario = cu;
                }
        };

        void greet();
        void display_main_menu();
        int get_option(int max_option);
        void reservar_vuelo();
        void mostrar_vuelos_pendientes();
        void mostrar_vuelos_pasados();
        void leer_base_datos();
        int get_day(string fecha);
        int get_month(string fecha);
        int get_year(string fecha);

        int main(void) {
            int option = -1;
            //saludo
            leer_base_datos();
            greet();

            //leer opcion
            while(option != 0) {
                 //menu de bienvenida
                 display_main_menu();
                 option = get_option(3);
                 switch(option) {
                     case 1:
                        reservar_vuelo();
                        break;
                    case 2:
                        mostrar_vuelos_pendientes();
                        break;
                    case 3:
                        mostrar_vuelos_pasados();
                        break;
                 }

            }
            //


        }

        int get_option(int max_option) {
            int opt = -1;
            cin >> opt;
            while(opt < 0 || opt > max_option) {
                cout << " Ingresa una opcion valida entre 0 y " << max_option << ": ";
                cin >> opt;
            }
        }

        void greet() {

            cout<<"Welcome to Mexican Airlines"<<endl;

        }

        void display_main_menu() {

            string options = "0. Exit\n1. Reservar vuelo\n2. Mostrar Reservaciones Pendientes\n3. Mostrar vuelos pasados\nElija una opcion: ";
            cout << options;
        }

        void reservar_vuelo()  {
            cout <<"reservando vuelo"<<endl;
            //pedir la fecha
            //Date salida = pedir_fecha();
            //buscar en la bd. los vuelos disponibles en esa fecha.
            //string vuelos[100] = obtener_vuelos(salida);
            //obtener opcion de vuelo
            //modificar la base de datos con la disponibilidad de asientos, la reservacion de esta persona.
            //confirmar vuelo
        }
        void mostrar_vuelos_pendientes() {
            cout <<"mostrando vuelos pendientes"<<endl;
        }
        void mostrar_vuelos_pasados() {
                cout <<"mostrando vuelos pasados"<<endl;

        }

        void leer_base_datos() {
            //abrir archivo
             // open a file in read mode.
               ifstream infile;
               infile.open("usuario_db.csv");
               int clave_usuario;
            string nombre;
            string apellido;
            string cel;
            Usuario *users = new Usuario[100];
            Usuario *current_user = NULL;
            int counter = 0;
               while(!infile.eof()) {
                   infile >> clave_usuario;
                   infile >> nombre;
                   infile >> apellido;
                   infile >> cel;
                   Usuario user(clave_usuario, nombre, apellido, cel);

                    users[counter] = user;
                    counter++;
               }

               infile.close();


            //leer linea por linea,
            //construir el objeto
            //agregarlo a la lista
            //cerrar archivo de db.
            infile.open("usuario_db.csv");
             int clave_vuelo;
             string origen;
             string destino;
             string fecha_str;

             int asientos_disponibles;
            Vuelo *vuelos = new Vuelo[1000];


             counter = 0;
               while(!infile.eof()) {
                   infile >> clave_vuelo;
                   infile >> origen;
                   infile >> destino;
                   infile >> fecha_str;
                   Dates fecha(get_day(fecha_str), get_month(fecha_str), get_year(fecha_str));
                   infile >> asientos_disponibles;
                   Vuelo vol(clave_vuelo, origen, destino, fecha, asientos_disponibles);
                   vuelos[counter] = vol;
                    counter++;
               }

               infile.close();


            //abrir archivo
            //leer linea por linea,
            //construir el objeto
            //agregarlo a la lista
            //cerrar archivo de db.


            //abrir archivo
            //leer linea por linea,
            //construir el objeto
            //agregarlo a la lista
            //cerrar archivo de db.

        }

        int get_day(string fecha) {
            return 0;
        }

        int get_month(string fecha) {
            return 0;
        }

        int get_year(string fecha) {
            return 0;
        }