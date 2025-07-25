#ifndef AGENDAMENTOS_H
#define AGENDAMENTOS_H

#include "imovel.h"

class Agendamentos{

    private:

        int horario;

        const Imovel* imovelAgendado;

    public:

    Agendamentos();

    Agendamentos(int firstHorario, const Imovel& firstImovelAgendado);

    void mostrarAgendamento();

    const Imovel* getImovelAgendado();

    int getHorario();

    void setHorario(int newHorario);

};





#endif