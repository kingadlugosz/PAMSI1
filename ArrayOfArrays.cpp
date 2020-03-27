#include "ArrayOfArrays.h"


/*
konstruktor klasy ArrayOfArrays- tworzacy tablice 100 elemetow klasy Array o zadanym romiarze
*/
ArrayOfArrays::ArrayOfArrays(int size_of_array,double percent) {
	this->tab =new Array[how_many_arr];
	this->size_of_arr = size_of_array;
	for (int i = 0; i < how_many_arr; i++) {
		tab[i].setmemory(size_of_array);
		if(percent==0){}
		else if (percent == -1) {
			backquicksort<int>(&tab[i], 0, size_of_array - 1);
		}
		else {
			quicksort<int>(&tab[i], 0, (size_of_array - 1) * percent / 100);
		}
	};
}

/*
destruktow klasy ArrayOfArrays- uwalnia pamiec zajeta przez tablice klasy
*/
ArrayOfArrays::~ArrayOfArrays() {
	delete [] tab;
}

void ArrayOfArrays::make_quicksort() {
	auto start1 = std::chrono::steady_clock::now();
	for (int i = 0; i < how_many_arr; i++) {
		quicksort<int>(&tab[i],0,size_of_arr-1);
	}
	auto end1 = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
	std::cout << "quick czas: " << elapsed_seconds1.count() << "\n" ;

}
void ArrayOfArrays::make_mergesort() {
	auto start1 = std::chrono::steady_clock::now();
	for (int i = 0; i < how_many_arr; i++) {
		mergeSort<int>(&tab[i], 0, size_of_arr - 1);
	}
	auto end1 = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
	std::cout << "heap czas: " << elapsed_seconds1.count() << "\n" ;
}
void ArrayOfArrays::make_introsort() {
	auto start1 = std::chrono::steady_clock::now();
	for (int i = 0; i < how_many_arr; i++) {
		introsort<int>(&tab[i], 0, size_of_arr - 1);
	}
	auto end1 = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
	std::cout << "intro czas: " << elapsed_seconds1.count() << "\n";
}

