#include "Nodo.h"

class Pila
{
public:
	//atributo
	Nodo *Tope;
	//constructores
	Pila();
	Pila(int Dato);
	//metodos
	void Push(int Dato);
	int Pop();
	bool PilaVacia();
	void VaciarPila();
	void Show();
};