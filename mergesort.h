#pragma once
#include<stdlib.h> 
#include<stdio.h> 
#include "Array.h"

/*
funckja pomocnicza w algorytmie mergesort- przeprowadza scalanie w odpowiedniej kolejnosci fragmetow tablicy sortowanej przy uzyciu tablic pomocniczych
*/
template <class C>
void merge(Array *arr, int left, int m, int right)
{
    int i, j, k;
    int n1 = m - left + 1;
    int n2 = right - m;
    C* L;
    C* R;


    L = new C[n1];
    R = new C[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr->tab[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr->tab[m + 1 + j];

    i = 0;
    j = 0; 
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr->tab[k] = L[i];
            i++;
        }
        else
        {
            arr->tab[k] = R[j];
            j++;
        }
        k++;
    }

   
    while (i < n1)
    {
        arr->tab[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr->tab[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

/*
funkcja mergesort- przeprowadzajaca algorym sorowania przez scalanie na ablicy wyluskanej z klasy Array na jej zakresie definiowanym przez left i right
*/
template <class C>
void mergeSort(Array * arr, int left, int right)
{
    if (left < right)
    {

        int m = left + (right - left) / 2;

        mergeSort<C>(arr, left, m);
        mergeSort<C>(arr, m + 1, right);

        merge<C>(arr, left, m, right);
    }
}

