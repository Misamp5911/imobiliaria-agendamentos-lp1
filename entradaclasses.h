#ifndef ENTRADACLASSES_H
#define ENTRADACLASSES_H

#include <string>
#include <vector>
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"


std::vector <Cliente> entradaCliente ();

std::vector <Corretor> entradaCorretor ();

std::vector <Imovel> entradaImovel ();


#endif