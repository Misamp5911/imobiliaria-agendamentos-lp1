#include "corretor.h"
#include <iostream>

int Corretor::nextIdCorretor = 1;

Corretor::Corretor(){}

Corretor::Corretor (std::string name, std::string phone, bool aval, double lat, double ltd){

    this->id = nextIdCorretor++;

    nome = name;

    telefone = phone;

    avaliador = aval;

    latitude = lat;

    longitude = ltd;

}

void Corretor::exibirInfo(){

    std::cout << "Corretor "  << this->id << std::endl << "Nome: " << this->nome << std::endl << "Telefone: " << this->telefone << std::endl << "Avaliador:";

    if(this->avaliador == 1) std::cout << " Sim" << std::endl;

    else if (this->avaliador == 0) std::cout << " Não" <<std::endl;

    else std::cout << " Erro na leitura!!!" << std::endl;

    std::cout << "Latitude: " << this->latitude << std::endl << "Longitude: " << this->longitude << std::endl << std::endl;

}

bool Corretor::getAval(){
    return this-> avaliador;
}

int Corretor::getId(){
    return this->id;
}

double Corretor::getLat(){
    return this->latitude;
}

double Corretor::getLng(){
    return this->longitude;
}

void Corretor::adicionarAvaliacao(Agendamentos novoAval){

    this->avaliacoes.push_back(novoAval);
}

void Corretor::mostrarAvaliacoes(){

    if(avaliacoes.size() == 0) return ;

    for(int i = 0; i < avaliacoes.size(); i++){

        avaliacoes[i].mostrarAgendamento();
    }
}