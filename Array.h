#pragma once
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <string>
#include <stdexcept>
#include <cstdlib>


/*
deklaracja klasy Array bedacej tablica liczb losowych
*/
class Array {
public:
	int size;
	int* tab;

	//Array(int);
	void setmemory(int);
	~Array();

	void print();
};
