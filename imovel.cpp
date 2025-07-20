#include "imovel.h"
#include <iostream>

int Imovel::nextIdImovel = 1;

Imovel::Imovel (){}

Imovel::Imovel (int firstOwnerId, tipoImovel firstTipo, double firstPreço, double firstLat, double firstLng, std::string firstEnderço){

    id = nextIdImovel++; 

    ownerId = firstOwnerId;

    tipo = firstTipo;

    preço = firstPreço;

    lat = firstLat;

    lng = firstLng;

    endereço = firstEnderço;

}

void Imovel::exibirInfo(){

    std::cout << "Imovel " << id << std::endl;

    std::cout << "Id do dono: " << ownerId << std::endl << "Tipo ";

    switch(tipo){

        case 1:
            std::cout << "Casa" << std::endl;
            break;

        case 2:
            std::cout << "Apartamento" << std::endl;
            break;

        case 3:
            std::cout << "Terreno" << std::endl;
            break;
    }

    std::cout << "Preço: " << preço << std::endl << "Latidude: " << lat << std::endl << "Longitude" << lng << std::endl;
    
    std:: cout << "Endereco: " << endereço << std::endl << std::endl;
}

int Imovel::getId() const{
    return this->id;
}

double Imovel::getLat() const{
    return this->lat;
}

double Imovel::getLng() const{
    return this->lng;
}