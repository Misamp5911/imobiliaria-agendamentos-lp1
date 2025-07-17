#include "cliente.h"
#include <iostream>

Cliente::Cliente (){}

Cliente::Cliente (int firstId, std::string name, std::string phone){

    this -> id = firstId;

    nome = name;

    telefone = phone;

}

void Cliente::exibirInfo(){

    std::cout << " "<<this->id << " " << this->nome << " " << this->telefone  << std::endl;

}