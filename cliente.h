#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

    private:

        int id;

        std::string nome;

        std::string telefone;

    public:

        Cliente();

        Cliente(int firstId, std::string name, std::string phone );

        void exibirInfo();

};

#endif