#pragma once
#include "Array.h"


/*
definicja funkcji quicksort- przeprowadza sortowanie szybkie na zadanej tablicy wyluskiwanej z klasy Array na jej zakresie definiowanym przez left i right
*/
template <class C>
void quicksort(Array*tab,int left,int right) {
	
	if (right <= left) {
		return;
	}

	C i = left - 1;
	C j = right + 1;
	C pivot = tab->tab[(left + right) / 2]; 

	
	while (1)
	{
		
		while (pivot > tab->tab[++i]);

		
		while (pivot < tab->tab[--j]);

		
		if (i <= j)
			
			std::swap(tab->tab[i], tab->tab[j]);
		else
			break;
	}
	
	if (j > left) {
		quicksort<C>(tab,left,j);
	}
	if (i < right) {
		quicksort<C>(tab,i,right);
	}
	
}

/*
definicja funkcji backquicksort- funkcja przeprowaddza odwrotne sortowanie tablicy wyluskiwanej z klasy Array 
*/
template <class C>
void backquicksort(Array* tab, int left, int right) {

	if (right <= left) {
		return;
	}

	C i = left - 1;
	C j = right + 1;
	C pivot = tab->tab[(left + right) / 2]; 

	while (1)
	{
		
		while (pivot > tab->tab[++i]);

		
		while (pivot < tab->tab[--j]);

	
		if (i <= j)
			
			std::swap(tab->tab[i], tab->tab[j]);
		else
			break;
	}

	if (j > left) {
		quicksort<C>(tab, left, j);
	}
	if (i < right) {
		quicksort<C>(tab, i, right);
	}

	
	for (int a = 0; a < tab->size / 2; a++) {
		std::swap(tab->tab[a], tab->tab[tab->size - a-1]);
	}
	
}

