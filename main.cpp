#include <iostream>
#include <vector>
#include "entradaclasses.h"
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"
#include "timenspace.h"

int main (){

    std::vector <Corretor> CorretorList = entradaCorretor();

    std::vector <Corretor> CorretorAvalList;

    std::vector <Cliente> ClientsList = entradaCliente();

    std::vector <Imovel> ImovelList = entradaImovel();

    for (int i = 0; i < CorretorList.size(); i++){

        if(CorretorList[i].getAval() == 1) CorretorAvalList.push_back(CorretorList[i]);

    }

    for (int i = 0; i < ImovelList.size(); i++){

        Agendamentos novoAgendamento = Agendamentos ( 540, ImovelList[i]);

        CorretorAvalList[i % CorretorAvalList.size()].adicionarAvaliacao(novoAgendamento);

    }
    
    for (int i = 0; i < CorretorAvalList.size(); i++){

        std::cout << "Corretor "<<CorretorAvalList[i].getId() << std::endl;

        CorretorAvalList[i].mostrarAvaliacoes();

    }
    //std::cout << "Distância do corretor " << CorretorList[0].getId() << " para imóvel " << ImovelList[0].getId ()<< " :" << haversine(CorretorList[0].getLat(), CorretorList[0].getLng(), ImovelList[0].getLat(),ImovelList[0].getLng()) << std::endl;

    return 0;
}