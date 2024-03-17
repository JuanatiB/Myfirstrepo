#include "Bombillo.h"
#include<iostream>

int main()
{
    //crear un objeto de la clase bombillo
    Bombillo mi_primer_bombillo = Bombillo();
    int encender_apagar = 0;
    
    do
    {
        std::cout<<"encender: 1 \napagar: 2\nsalir: 3"<<std::endl;
        std::cin >> encender_apagar;
        if (encender_apagar == 1)
        {
            mi_primer_bombillo.encender();
        }
        if(encender_apagar == 2)
        {
            mi_primer_bombillo.apagar();
        }
        if(encender_apagar !=1 and encender_apagar != 2 and encender_apagar !=3)
        {
            std::cout<<"valor no valido"<<std::endl;
            return 0;
        }
    }while (encender_apagar !=3);
    
    return 0;
    //std::cout<<"holamundo"<<std::endl;
}