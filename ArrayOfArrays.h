#pragma once
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <chrono>
#include "Array.h"

#include "quicksort.h"
#include "mergesort.h"
#include "heapsort.h"
#include "partition.h"
#include "introsort.h"
#include "insertionsort.h"

/*
deklatacja klasy ArrayOfArrays bedacej tablica 100 elemetow klasy Array o rozmiarze zadanym w konstruktorze klasy
*/
class ArrayOfArrays {
public:
	const int how_many_arr=100;
	int size_of_arr;
	Array* tab;
	void make_quicksort();
	void make_mergesort();
	void make_introsort();

	ArrayOfArrays(int,double);
	~ArrayOfArrays();
};