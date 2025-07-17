Agendamentos: main.o cliente.o corretor.o imovel.o entradaclasses.o
	g++ main.o cliente.o corretor.o imovel.o entradaclasses.o -w -o Agendamentos

Main: main.cpp
	g++ main.cpp -w -c 

Cliente: cliente.cpp
	g++ cliente.cpp -w -c

Corretor: corretor.cpp
	g++ corretor.cpp -w -c

Imovel: imovel.cpp
	g++ imovel.cpp -w -c

EntradaClasses: entradaclasses.cpp
	g++ entradaclasses.cpp -w -c

Remove:
	rm -f *.o

Erase:
	rm Agendamentos



