#include <iostream>
#include <vector>
#include "entradaclasses.h"
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"
#include "haversine.h"

int main (){

    std::vector <Corretor> CorretorList = entradaCorretor();

    std::vector <Corretor> CorretorAvalList;

    std::vector <Cliente> ClientsList = entradaCliente();

    std::vector <Imovel> ImovelList = entradaImovel();

    for (int i = 0; i < CorretorList.size(); i++){

        if(CorretorList[i].getAval() == 1) CorretorAvalList.push_back(CorretorList[i]);

    }

    //"For" para designar os imóveis para cada corretor correspondente.

    for (int i = 0; i < ImovelList.size(); i++){

        Agendamentos novoAgendamento = Agendamentos (540, ImovelList[i]);

        CorretorAvalList[i % CorretorAvalList.size()].adicionarAvaliacao(novoAgendamento);

    }
    
    //Gerar agenda.

    for(int i = 0; i < CorretorAvalList.size(); i++){

        CorretorAvalList[i].gerarAgenda();

    }

    //For para mostrar os agendamentos de cada corretor

    for (int i = 0; i < CorretorAvalList.size(); i++){

        std::cout << "Corretor "<<CorretorAvalList[i].getId() << std::endl;

        CorretorAvalList[i].mostrarAvaliacoes();

    }

    return 0;
}