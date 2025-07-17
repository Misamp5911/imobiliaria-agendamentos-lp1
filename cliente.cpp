#include "cliente.h"
#include <iostream>

int Cliente::nextIdClient = 1;

Cliente::Cliente (){}

Cliente::Cliente (std::string name, std::string phone){

    this -> id = nextIdClient++;

    nome = name;

    telefone = phone;

}

void Cliente::exibirInfo(){

    std::cout << " "<<this->id << " " << this->nome << " " << this->telefone  << std::endl;

}