#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

enum tipoImovel {

    Casa = 1,
    Apartamento,
    Terreno
};

class Imovel{

    private:

        static int nextIdImovel;

        int id;

        int ownerId;

        tipoImovel tipo;

        double lat;

        double lng; 

        std::string endereço;

        double preço;

    public:

        Imovel();

        Imovel(int firstOwnerId, tipoImovel firstTipo, double firstPreço, double firstLat, double firstLng, std::string firstEnderço);

        void exibirInfo();

};

#endif