#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

    private:

        static int nextIdClient;

        int id;

        std::string nome;

        std::string telefone;

    public:

        Cliente();

        Cliente(std::string name, std::string phone );

        void exibirInfo();

};

#endif