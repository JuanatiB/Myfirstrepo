#ifndef BOMBILLO_H
#define BOMBILLO_H
class Bombillo
{
    private: 
        bool esta_encendido; //0 false, cualquier numero true
    public:
        Bombillo();
        void encender();
        void apagar();

};

#else
class Bombillo;
#endif