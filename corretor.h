#ifndef CORRETOR_H
#define CORRETOR_H

#include <string>

class Corretor {

    private:

        int id;

        std::string nome;

        std::string telefone;

        bool avaliador;

        double latitude;

        double longitude;

    public:

        Corretor ();

        Corretor (int newId, std::string name, std::string phone, bool aval, double lat, double ltd);

        void exibirInfo();

};

#endif