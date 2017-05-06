#include "Pila.h"

Pila::Pila()
{
	this->Tope = NULL;
}

Pila::Pila(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->Tope = aux;
}

void Pila::Push(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->Tope);
	this->Tope = aux;
}

int Pila::Pop()
{
	if(PilaVacia())
	{
		std::cout<<"la pila esta vacia"<<std::endl;
	}
	else
	{
		int x = this->Tope->getDato();
		this->Tope = this->Tope->getSig();
		return x;
	}
}

bool Pila::PilaVacia()
{
	if (this->Tope == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Pila::VaciarPila()
{ 
	this->Tope = NULL;
}

void Pila::Show()
{
	if(PilaVacia())
	{
		std::cout<<"pila  vacia"<<std::endl;
		return;
	}
	Nodo *aux = this->Tope;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux = aux->getSig();
	}
}