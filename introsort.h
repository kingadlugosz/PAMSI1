#pragma once
#include <cmath>
#include "Array.h"
#include "heapsort.h"
#include "partition.h"
#include "insertionsort.h"

/*
funkcja introsortUtil-funckja wykorzystywana do realizacji algorytmu sortowania introspektywnego. Podejmuje decyzje i wykonuje rodzaj sortowania najbardziej wydajny na danym zakresie tablicy
*/
template<class C>
void introsortUtil(Array* tab, int left, int right, int deepthlimit) {
	int deepthlimit1 = deepthlimit;
	if (right - left > 16) {
		if (deepthlimit <= 0) {
			heapsort<C>(tab, left, right);
		}
		int partitionPoint = partition<C>(tab, left, right);
		introsortUtil<C>(tab, partitionPoint + 1, right, deepthlimit1 - 1);
		introsortUtil<C>(tab, left, partitionPoint, deepthlimit1 - 1);
	}
	else {
		insertionsort<C>(tab, left, right);
	}
};

/*
funckja introsort- realizuja algorytm sortowania introspektywnego przy uzyciu funkcji introsortUtil na zadanej tablicy wyluskane z klasy Array na jej zakresie definiowanym przez left i right
*/
template<class C>
void introsort(Array* tab, int left, int right) {
	int deepthlimit = 2 * log(right - left);
	introsortUtil<C>(tab, left, right, deepthlimit);
};







