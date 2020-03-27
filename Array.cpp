#include "Array.h"


/*
metoda klasy setmemory- rezerwuje pamiec na tablice o okreslonym rozmiarze, jak rowniez uzupelnia tablice o elementy losowe
*/
void Array::setmemory(int rozmiar) {
	size = rozmiar;
	srand((unsigned)time(NULL));
	this->tab = new int[size];
	for (int a = 0; a < size; a++) {
		this->tab[a] = rand();
	}
}

/*
destruktor klasy Array- uwalnia pamiec zarezerwowana dla tablicy
*/
Array::~Array() {
	delete [] tab;
}

/*
metoda klasy print- wyswietla 100 pierwszych i ostatnich elemetow tablicy w klasie Array, uzywalem tej funkcji do testow sortowan
*/
void Array::print() {
	if (size < 1000) {
		std::cout << "tablica za miala- min.1000 \n";
	}
	else {
		std::cout << "pierwsze 100 elementow\n";
		for (int a = 0; a < 100; a++) {
			std::cout << tab[a] << " ";
		}
		std::cout << "\nostatnie 100 elementow\n";
		for (int a = size-100; a < size; a++) {
			std::cout << tab[a] << " ";
		}
	}
}





