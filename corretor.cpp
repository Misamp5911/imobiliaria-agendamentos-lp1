#include "corretor.h"
#include <iostream>

Corretor::Corretor(){}

Corretor::Corretor (int newId, std::string name, std::string phone, bool aval, double lat, double ltd){

    this->id = newId;

    nome = name;

    telefone = phone;

    avaliador = aval;

    latitude = lat;

    longitude = ltd;

}

void Corretor::exibirInfo(){

    std::cout << "Corretor "  << this->id << std::endl << "Nome: " << this->nome << std::endl << "Telefone: " << this->telefone << std::endl << "Avaliador:";

    if(this->avaliador == 1) std::cout << " Sim" << std::endl;

    else if (this->avaliador == 0) std::cout << " Não" <<std::endl;

    else std::cout << " Erro na leitura!!!" << std::endl;

    std::cout << "Latitude: " << this->latitude << std::endl << "Longitude: " << this->longitude << std::endl << std::endl;

}