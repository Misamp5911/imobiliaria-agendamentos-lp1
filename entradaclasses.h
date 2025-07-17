#ifndef ENTRADACLASSES_H
#define ENTRADACLASSES_H

#include <string>
#include <vector>
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"


std::vector <Cliente> entradaCliente (int number);

std::vector <Corretor> entradaCorretor (int number);

std::vector <Imovel> entradaImovel (int number);


#endif