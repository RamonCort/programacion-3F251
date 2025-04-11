#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(int argc, const char** argv) {

    ofstream archivoSalida("archivo.txt");
    if(!archivoSalida){
    cerr <<"Erro al leer archivo"<<endl;
    return 1;//filalizar con error
    }

    cout<< "Escribiendo Archivo" << endl;
    archivoSalida <<"Hola mundo este es mi primer archivo"<< endl;
    archivoSalida <<"Hola mundo este es mi primer archivo"<< endl;
    archivoSalida <<"Hola mundo este es mi primer archivo"<< endl;
    archivoSalida <<"Hola mundo este es mi primer archivo"<< endl;
    archivoSalida.close();
    //------------------------------------------------------------
    ifstream archivoEntrada("archivo.txt");
    if (!archivoEntrada)
    {
        cerr << "Erro al leer archivo" << endl;
        return 1; // filalizar con error
    }

    cout << "Leyendo Archivo" << endl;
    string linea;
    while (getline(archivoEntrada, linea)){
        cout << linea << endl;
    }
    archivoEntrada.close();

    return 0;
 }