#include <iostream>
#include <string>
#include <vector>
#include "entradaclasses.h"
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"

//Função para armazenar objetos instânciados (a partir da entrada padrão) em um vetor de clientes.

std::vector <Cliente> entradaCliente (){

    int number;

    std::cin >> number;

    std::vector <Cliente> ListadeClientes;

    for (int i = 0; i < number; i++){

        std::string telefone = "";

        std::string nome = "";

        std::cin >> telefone >> nome;

        Cliente novocliente = Cliente (nome ,telefone);

        ListadeClientes.push_back(novocliente);

    }

    return ListadeClientes;

}

//Função para armazenar objetos instânciados (a partir da entrada padrão) em um vetor de corretores.

std::vector <Corretor> entradaCorretor (){

    int number;

    std::cin >> number;

    std::vector <Corretor> ListadeCorretores;

    for (int i = 0; i < number; i++){

        std::string nome = "";

        std::string telefone = "";

        bool avaliador = 0;

        double latitude = 0;

        double longitude = 0;

        std::cin >> telefone >> avaliador >> latitude >> longitude >> nome;

        Corretor novoCorretor = Corretor ( nome, telefone, avaliador, latitude, longitude);

        ListadeCorretores.push_back(novoCorretor);

    }

    return ListadeCorretores;

}

//Função para armazenar objetos instânciados (a partir da entrada padrão) em um vetor de imóveis.

std::vector <Imovel> entradaImovel (){

    int number;

    std::cin >> number;

    std::vector <Imovel> ListadeImoveis;

    for (int i = 0; i < number; i++){

        std::string entradaTipo = "";

        int idDono = 0 ;

        double latitude = 0;

        double longitude = 0;
        
        double preço = 0 ;

        std::string endereço = "";

        std::cin >> entradaTipo >> idDono >> latitude >> longitude >> preço;

        std::getline(std::cin >> std::ws, endereço);

        tipoImovel tipo;

        if(entradaTipo == "Casa") tipo = Casa;

        else if (entradaTipo == "Apartamento") tipo = Apartamento;

        else if (entradaTipo == "Terreno") tipo = Terreno ;

        Imovel novoImovel = Imovel (idDono, tipo, preço, latitude, longitude, endereço);

        ListadeImoveis.push_back(novoImovel);

    }

    return ListadeImoveis;

}