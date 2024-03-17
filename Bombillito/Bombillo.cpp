#include "Bombillo.h"
#include <iostream>
#include <string>

using namespace std;

/*
constructor de un bombillo, que va a crear un bombillo apagado
*/
Bombillo::Bombillo()
{
    esta_encendido = false;
    cout<<"Creaste un bombillo apagado!"<<endl;
}
/*
Este metodo verifica si el bombillo está encendido
*/
void Bombillo::encender()
{
    if(esta_encendido == true)
        cout<<"El bombillo ya está encendido, no se pude volver a prender"<<endl;
    else
    {
        esta_encendido = true;
        cout<<"Acabamos de encender el Bombillo!!"<<endl;
    }
}

void Bombillo::apagar()
{
    if(esta_encendido == false)
        cout<<"El bombillo ya está apagado"<<endl;
    else
    {
        esta_encendido = false;
        cout<<"El bombillo se apagó!!"<<endl;
    }
}