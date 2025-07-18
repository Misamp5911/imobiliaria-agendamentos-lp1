#ifndef CORRETOR_H
#define CORRETOR_H

#include <string>
#include <vector>
#include "agendamentos.h"

class Corretor {

    private:

        static int nextIdCorretor;

        int id;

        std::string nome;

        std::string telefone;

        bool avaliador;

        double latitude;

        double longitude;

        std::vector <Agendamentos> avaliacoes;

    public:

        Corretor ();

        Corretor (std::string name, std::string phone, bool aval, double lat, double ltd);

        void exibirInfo();

        bool getAval();

        int getId();

        double getLat();

        double getLng();

        void adicionarAvaliacao(Agendamentos novaAval);

        void mostrarAvaliacoes();
};

#endif