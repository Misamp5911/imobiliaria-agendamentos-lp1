#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel{

    private:

        int id;

        int ownerId;

        //tipo enum(Casa, Apartamento, Terreno) ver isso dps.

        enum tipo {Casa, Apartamento, Terreno};

        double lat;

        double lng; 

        std::string endereço;

        double preço;

    public:

        Imovel();

        Imovel(int);

        ~Imovel();

};

#endif