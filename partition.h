#pragma once

/*
fukcja parition- dokonuj parycji tablicy wyluskiwanej z klasy Array na jej zakresie definiowanym przez left i right. Funckja wykorzystywana w algorytmie introsort
*/
template<typename C>
int partition(Array* tab, int left, int right)
{
	C pivot = tab->tab[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (true)
	{

		while (pivot > tab->tab[++i]);

		while (pivot < tab->tab[--j]);

		if (i >= j) {
			return j;
		}
		std::swap(tab->tab[i], tab->tab[j]);

	}
}