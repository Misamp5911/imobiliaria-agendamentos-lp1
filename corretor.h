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

        //int getId();

        //std::string getName();

        //std::string getPhone();

        Corretor ();

        Corretor (int newId, std::string name, std::string phone, bool aval, double lat, double ltd);

        ~Corretor ();

};

#endif