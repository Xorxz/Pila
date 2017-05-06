#include <iostream>

class Nodo
{
private:
	//atributos
	int Dato;
	Nodo *Sig;
public:
	//metodos
	Nodo(int Dato, Nodo* Sig);
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo *getSig();

};