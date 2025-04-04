#pragma once
#include <iostream>
#include"Foco.hpp"
using namespace std;

class serie
{
private:
Foco focos[10];

public:
    serie() {}
    ~serie() {}
    void EncenderTodo(){
       this->Encendercantidad(10);
    }
    void Encendercantidad(size_t cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            focos[i].Encender();
        }
        
    }
    void Recorrerderecha(){


    }
    void Apagartodo(){
        for (size_t i = 0; i < 10; i++)
        {
            focos[i].Apagar();
        }
        
    }
    void imprimir(){
        for (size_t i = 0; i < 10; i++)
        {
            cout<< focos[i].LeerEstado();
        }
        cout<<endl;
    }
};