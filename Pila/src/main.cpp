#include "Pila.h"

int main()
{
	Pila p = Pila(2);
	
	p.Push(3);
	p.VaciarPila();
	p.Push(4);
	p.Push(4);
	p.Push(5);
	p.Pop();
	p.Show();
	
	return 0;
}