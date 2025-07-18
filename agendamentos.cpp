#include "agendamentos.h"
#include <iostream>
#include <iomanip>

Agendamentos::Agendamentos(){

}

Agendamentos::Agendamentos(int firstHorario, const Imovel& firstImovelAgendado){

    this -> horario = firstHorario;

    this->imovelAgendado = &firstImovelAgendado;

}

void Agendamentos::mostrarAgendamento(){    

    int minutos = horario % 60;

    int horas = (horario - horario % 60) /60;

    std::cout << "Horário: " << std::setw (2) << std::setfill('0') << horas << ":" << 
    
    std::setw (2) << std::setfill('0') << minutos << " Imovel " << imovelAgendado->getId()<< std::endl;

}