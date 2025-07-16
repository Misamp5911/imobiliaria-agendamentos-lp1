#include "corretor.h"

Corretor::Corretor(){};

Corretor::Corretor (int newId, std::string name, std::string phone, bool aval, double lat, double ltd){

    this->id = newId;

    nome = name;

    telefone = phone;

    avaliador = aval;

    latitude = lat;

    longitude = ltd;

};