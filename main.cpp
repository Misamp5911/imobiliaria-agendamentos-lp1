#include <iostream>
#include <vector>
#include "entradaclasses.h"
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"

int main (){

    int number;

    std::cin >> number;

    std::vector <Corretor> CorretorList = entradaCorretor(number);

    for (int i = 0; i < CorretorList.size(); i++){

        CorretorList[i].exibirInfo();

    }

    std::cin >> number;

    std::vector <Cliente> ClientsList = entradaCliente(number);

    for (int i = 0; i < ClientsList.size(); i++){

        ClientsList[i].exibirInfo();

    }

    std::cin >> number;

    std::vector <Imovel> ImovelList = entradaImovel(number);

    for (int i = 0; i < ImovelList.size(); i++){

        ImovelList[i].exibirInfo();

    }

    return 0;
}