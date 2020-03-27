#pragma once

/*
funckja heaptree- dokonuje podzialu na drzewa binarne i dokonuje zamiany elemetow zgodnie z algorytmem sortowania przez kopcowanie
*/
template<typename C>
void heaptree(C* tab, int left, int right, int heapN)
{
	int size = right - left;
	int largest = heapN;
	int child_left = 2 * heapN + 1;
	int child_right = 2 * heapN + 2;

	if (child_left<size && tab[child_left]>tab[largest])
	{
		largest = child_left;
	}
	if (child_right<size && tab[child_right]>tab[largest])
	{
		largest = child_right;
	}
	if (largest != heapN)
	{
		std::swap(tab[heapN], tab[largest]);
		heaptree(tab, left, right, largest);
	}

}

/*
funckja heapsort-realizuje algorytm sortowania przez kopcowanie przy wykorzystaniu funkcji heaptree
*/
template<typename C>
void heapsort(Array* tab, int left, int right)
{

	++right;
	C* temporary = new C[right - left];
	for (int i = 0; i < right - left; i++)
	{
		temporary[i] = tab->tab[left + i];
	}
	for (int i = (right - left) / 2 - 1; i >= 0; i--)
	{
		heaptree(temporary, left, right, i);
	}
	for (int i = (right - left) - 1; i >= 0; i--)
	{
		std::swap(temporary[0], temporary[i]);
		heaptree(temporary, 0, i, 0);
	}
	for (int i = 0; i < right - left; i++)
	{
		tab->tab[left + i] = temporary[i];
	}
	delete[] temporary;
}

