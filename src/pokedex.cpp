
// CONTENEDORES
#include <list>
#include <vector>
#include <map>
// FLUJO DE DATOS
#include <iostream>
#include <fstream>
#include <sstream>
// CADENA DE DATOS
#include <string>
using namespace std;
void demo();
enum TipoPokemon{
    FUEGO,
    PLANTA,
    AGUA,
    ELECTRICO,
    VOLADOR,
};
class Pokemon{
    private:
    string nombre;
    list<TipoPokemon> tipos;
    public:

};
int main(int argc, char const *argv[])
{
    demo();
    return 0;
}


void demo()
{
    // ARREGLOS CLASICOS
    cout <<"1.-Arreglos"<<endl;
    int edades[10];
    edades[0] = 1;
    edades[1] = 10;
    edades[2] = 20;
    edades[3] = 30;
    edades[4] = 40;
    
    cout << "Edad numero 1 : " << edades[0] << endl; // Aceder a un valor unico
    // Contenedores de la libreria estandar C++
    list<int> listaEdades; //--------------------(Plantillas)
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);
    // No se puede acceder a un elemento unico de forma natural
    // Ya que la lista esta hecha para ser recorida
    int indice = 0;
    cout <<"2.-Listas"<<endl;
    for (auto &&edad : listaEdades)
    {
        cout << "Edad numero" << indice << " : " << edades[indice] << endl;
        indice++;
    }
    // utilizar estructura de vector
    // La cual si se puedee acceder por elemntos
    cout <<"3.-Vectores"<< endl;
    vector<int> vectorEntero;
    vectorEntero.push_back(1);
    vectorEntero.push_back(2);
    vectorEntero.push_back(3);
    vectorEntero.push_back(4);
    vectorEntero[4] = 5; // <-- Aqui utilizamos el operador []

    for (int i = 0; i < 5; i++)
    {
        cout << "Edad" << i << " : " << vectorEntero[i] << endl;
    }
    //Mapas
    
    
}
