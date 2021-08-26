/*
 * main.c
 *
 *  Created on: 25 de ago. de 2021
 *      Author: emanu
 */

#include <stdio.h>
#include <stdlib.h>

#include "analyser.h"

int main(){
	int size, i;

	scanf("%d", &size);

	int* data = malloc(sizeof(int) * size);

	for (i=0; i<size; i++)
		scanf("%d ", &data[i]);
	print_percentile(size, data);
}
