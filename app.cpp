#include "Array.h"
#include "ArrayOfArrays.h"
#include "quicksort.h"
#include "mergesort.h"
#include "heapsort.h"
#include "partition.h"
#include "introsort.h"
#include "insertionsort.h"
#include <chrono>


void INTROsort(int size,double percent) {
	ArrayOfArrays aoa(size, percent);
	aoa.make_introsort();
}

void QUICKsort(int size, double percent) {
	ArrayOfArrays aoa(size, percent);
	aoa.make_quicksort();
}

void MERGEsort(int size, double percent) {
	ArrayOfArrays aoa(size, percent);
	aoa.make_mergesort();
}

/*
W funckji main zaprezenowana jest implementacja klas i funkcji w sposob w jaki uzywalam ich do przeprowadzenia badan.
*/
int main() {
	int size;
	double percent;

	while (1) {
		std::cout << "\n######### PROGRAM SORTUJACY TABLICE ##########\n";
		std::cout << "wybierz: \n";
		std::cout << "	1. quick sort \n";
		std::cout << "	2. merge sort \n";
		std::cout << "	3. intro sort \n";
		std::cout << "	4. seria sortowan \n";
		std::cout << "	5. koniec \n";
		std::cout << "################################################ \n";
		int choice;
		std::cin >> choice;
		std::cout << "	\n \n";
		switch (choice)
		{
		case 1:
			std::cout << "wprowadz liczbe elemetow z ktorych ma sie skladac tablica: \n";
			std::cin >> size;
			std::cout << "wprowadz procent sortowania poczatkowego (dla odwrotnego posortowania wpisac '-1' \n";
			std::cin >> percent;
			QUICKsort(size, percent);
			std::cout << "------------------------\n";
			break;
		case 2:
			std::cout << "wprowadz liczbe elemetow z ktorych ma sie skladac tablica: \n";
			std::cin >> size;
			std::cout << "wprowadz procent sortowania poczatkowego (dla odwrotnego posortowania wpisac '-1' \n";
			std::cin >> percent;
			MERGEsort(size, percent);
			std::cout << "------------------------\n";
			break;
		case 3:
			std::cout << "wprowadz liczbe elemetow z ktorych ma sie skladac tablica: \n";
			std::cin >> size;
			std::cout << "wprowadz procent sortowania poczatkowego (dla odwrotnego posortowania wpisac '-1' \n";
			std::cin >> percent;
			INTROsort(size, percent);
			std::cout << "------------------------\n";
			break;
		case 4:
			std::cout << "wprowadz liczbe elemetow z ktorych ma sie skladac tablica: \n";
			std::cin >> size;
			std::cout << "wprowadz procent sortowania poczatkowego (dla odwrotnego posortowania wpisac '-1' \n";
			std::cin >> percent;
			QUICKsort(size, percent);
			MERGEsort(size, percent);
			INTROsort(size, percent);
			break;
		case 5:
			return 0;


		default:
			break;
		}
	}
	
	
	/*
	std::cout << "tablice gotowe\n";
	std::cout << "seria I\n";
	//QUICKsort
	std::cout << "\n QUICKsort:START";
	auto start1 = std::chrono::steady_clock::now();
	for (int i = 0; i < 100; i++) {
		quicksort<int>(&jeden1.tab[i], 0, size - 1);
	}
	auto end1 = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
	std::cout << ":STOP:czas " << elapsed_seconds1.count() << "\n" << "-------------------------";
	*/
	


	return 0;
}