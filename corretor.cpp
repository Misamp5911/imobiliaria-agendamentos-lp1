#include "corretor.h"
#include "haversine.h"
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

void Corretor::trocarOrdemAvaliação(int primeiro, int segundo){

    Agendamentos temp;

    temp = avaliacoes[primeiro];

    avaliacoes[primeiro] = avaliacoes[segundo];

    avaliacoes[segundo] = temp;

}

void Corretor::mostrarAvaliacoes(){

    if(avaliacoes.size() == 0) return ;

    for(int i = 0; i < avaliacoes.size(); i++){

        avaliacoes[i].mostrarAgendamento();
    }
}

void Corretor::gerarAgenda(){
    
    if(avaliacoes.size() == 0){
    
        std::cout << "Não existem avaliações marcadas para o corretor " << id << std::endl;

        return;
    }

    double distance = haversine(latitude, longitude, avaliacoes[0].getImovelAgendado()->getLat(), avaliacoes[0].getImovelAgendado()->getLng());

    if (avaliacoes.size() == 1){

        avaliacoes[0].setHorario(540 + distance * 2);

        return;
    }

    int index = 0;

    //Localizar vizinho mais próximo do corretor.

    for (int i = 1; i < avaliacoes.size(); i++){

        if(distance > haversine(latitude, longitude, avaliacoes[i].getImovelAgendado()->getLat(), avaliacoes[i].getImovelAgendado()->getLng())) {

            distance = haversine(latitude, longitude, avaliacoes[i].getImovelAgendado()->getLat(), avaliacoes[i].getImovelAgendado()->getLng());

            index = i;
        }
    }

    avaliacoes[index].setHorario (540 + distance * 2);

    if(index != 0 ) trocarOrdemAvaliação(0 , index);

    if(avaliacoes.size() == 2 ){

        avaliacoes[1].setHorario(avaliacoes[0].getHorario() + 60 + 2 * haversine(avaliacoes[0].getImovelAgendado()->getLat(), avaliacoes[0].getImovelAgendado()->getLng(), avaliacoes[1].getImovelAgendado()->getLat(), avaliacoes[1].getImovelAgendado()->getLng()));
        return;
    }

    //Localizar vizinho mais próximo do corretor a partir do primeiro imóvel (percorrendo agora somente o vetor de agendamentos).

    for(int i = 0; i < avaliacoes.size() - 1; i++){

        index = i + 1;

        distance = haversine(avaliacoes[i].getImovelAgendado()->getLat(),avaliacoes[i].getImovelAgendado()->getLng() , avaliacoes[i+1].getImovelAgendado()->getLat(), avaliacoes[i+1].getImovelAgendado()->getLng());

        for(int j = i + 2; j < avaliacoes.size(); j++){

        if(distance > haversine(avaliacoes[i].getImovelAgendado()->getLat(),avaliacoes[i].getImovelAgendado()->getLng(), avaliacoes[j].getImovelAgendado()->getLat(), avaliacoes[j].getImovelAgendado()->getLng())) {

            distance = haversine(avaliacoes[i].getImovelAgendado()->getLat(),avaliacoes[i].getImovelAgendado()->getLng(), avaliacoes[j].getImovelAgendado()->getLat(), avaliacoes[j].getImovelAgendado()->getLng());

            index = j;
        }

        }
        avaliacoes[index].setHorario(avaliacoes[i].getHorario() + 60 + 2 * distance);

        if(index != i + 1) trocarOrdemAvaliação(i + 1, index);
    }
}