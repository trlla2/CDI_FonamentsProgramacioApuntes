// Las listas no guardan los datos de forma contigua a contrario de los vectores
#include <list>
#include <iostream>

int main()
{
	std::list<int> l;
	

	l.push_back(45);
	l.push_front(47);

	std::list<int>::iterator it = l.begin(); // si la lista esta vacia peta
	for (; it != l.end(); it++) {
		std::cout << *it << std::endl;
	}

	it = l.erase(it); // importante igualar el iterador pq sino quedara invalidado 

	// begin apunta al primer elemento
	//it.rend apunta al anterior del primer elemento 
	std::list<int>::reverse_iterator itReverse = l.rbegin(); 
	for (; itReverse != l.rend(); itReverse++) {
		std::cout << *itReverse << std::endl;
	}
}
