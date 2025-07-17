#ifndef CORRETOR_H
#define CORRETOR_H

#include <string>

class Corretor {

    private:

        static int nextIdCorretor;

        int id;

        std::string nome;

        std::string telefone;

        bool avaliador;

        double latitude;

        double longitude;

    public:

        Corretor ();

        Corretor (std::string name, std::string phone, bool aval, double lat, double ltd);

        void exibirInfo();

};

#endif