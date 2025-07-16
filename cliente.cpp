#include "cliente.h"

Cliente::Cliente (){}

Cliente::Cliente (int firstId, std::string name, std::string phone){

    this -> id = firstId;

    nome = name;

    telefone = phone;

}