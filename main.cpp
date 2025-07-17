#include <iostream>
#include <vector>
#include "entradaclasses.h"
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"

int main (){

    std::vector <Corretor> CorretorList = entradaCorretor();

    for (int i = 0; i < CorretorList.size(); i++){

        CorretorList[i].exibirInfo();

    }

    std::vector <Cliente> ClientsList = entradaCliente();

    for (int i = 0; i < ClientsList.size(); i++){

        ClientsList[i].exibirInfo();

    }

    std::vector <Imovel> ImovelList = entradaImovel();

    for (int i = 0; i < ImovelList.size(); i++){

        ImovelList[i].exibirInfo();

    }

    return 0;
}