#pragma once

/*
funckja insertionsort- realizuje algorytm sortowania poprzez wstawianie na zadanej tablicy wyluskane z klasy Array na jej zakresie definiowanym przez left i right
*/
template<typename C>
void insertionsort(Array* tab, int left, int right)
{
	for (int i = left; i <= right; i++)
	{
		C key = tab->tab[i];
		int j = i;
		while (j > left&& tab->tab[j - 1] > key)
		{
			tab->tab[j] = tab->tab[j - 1];
			j--;

		}
		tab->tab[j] = key;
	}
}
