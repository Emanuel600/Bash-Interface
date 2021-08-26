/*
 * Part of the code that generates random numbers
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "data_manager.h"

// Allocate and return space for array
int* create(int size){
	int* data = malloc(size*sizeof(int));
	if (data == NULL){
		perror("Error when creating vector");
		exit(-1);
	}
	// Set random seed an return allocated space
	srand((unsigned) time(NULL));
	return data;
}
// Fill array with random data
int* fill(int* data, int size){
	int i;

	for (i=0; i<size; i++)
		data[i] = rand();

	return data;
}
// Print data to standard output
void print_data(int* data, int size){
	int i;

	for (i=0; i<size; i++)
		printf("%d ", data[i]);
}

