#include <iostream>
using namespace std;

/*
Todo lo que haga en estos archivos representa lo poco que recuerdo de python llevado a C++
comenzando por los acumuladores y contadores.
*/
int main()
{
    string nombre, preg1, preg2, preg3, mensaje_final;
    int puntuacion, pregunta1, pregunta2, pregunta3;
    cout<< "¿cual es tu nombre?"<<endl;
    getline(cin, nombre);
    cout<<"pregunta uno respuesta 1"<<endl;
    getline(cin, preg1);
    pregunta1 = stoi(preg1);
    puntuacion = 0;
    if (pregunta1 == 1)
    {
        cout<<"Correcto!"<<endl;
        puntuacion += 1;
    }
    cout<<"pregunta dos respuesta 2"<<endl;
    getline(cin, preg2);
    pregunta2 = stoi(preg2);
    if (pregunta2 == 2)
    {
        cout<<"Correcto!"<<endl;
        puntuacion += 1;
    }
    cout<<"pregunta tres respuesta 3"<<endl;
    getline(cin, preg3);
    pregunta3 = stoi(preg3);
    if (pregunta3 == 3)
    {
        cout<<"Correcto!"<<endl;
        puntuacion += 1;
    }
    mensaje_final = nombre + ", tu puntuación es de " + to_string(puntuacion);
    cout<<mensaje_final<<endl;
// this is so stupid slkdfjsl
    return 0;
}