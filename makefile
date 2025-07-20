imobiliaria: main.o cliente.o corretor.o imovel.o entradaclasses.o agendamentos.o haversine.o
	g++ main.o cliente.o corretor.o imovel.o entradaclasses.o agendamentos.o haversine.o -w -o imobiliaria

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

Haversine: haversine.cpp
	g++ haversine.cpp -w -c

Agendamentos: agendamentos.cpp
	g++ agendamentos.cpp -w -c

Remove:
	rm -f *.o

Erase:
	rm imobiliaria



