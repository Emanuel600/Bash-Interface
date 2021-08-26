/*
 * analyser.c
 *
 *  Created on: 25 de ago. de 2021
 *      Author: emanu
 */

#include <math.h>
#include <stdio.h>

#include "analyser.h"

void print_percentile(int size, int* data){
	// Calculate index of percentile
	int lower  = round(size/4)  ;
	int median = round(size/2)  ;
	int upper  = round(3*size/4);
	// Print lowest number
	printf("Lowest value: [%04d] at position %d\n", data[0], 1);
	/* Print percentiles to stdout */
	printf("25th percentile: [%04d] at position %d\n", data[lower], lower + 1);
	printf("50th percentile: [%04d] at position %d\n", data[median], median + 1);
	printf("75th percentile: [%04d] at position %d\n", data[upper], upper + 1);
	// Print highest number
	printf("Highest value: [%04d] at position %d\n", data[size-1], size);
}
