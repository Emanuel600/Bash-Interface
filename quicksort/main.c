
#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"

int main(){
	int size;
	char name[12];

	scanf("%d %s", &size, name);
	// Allocate space for array
	int* data = malloc(size* sizeof(int));
	// Open file
	FILE* fp = fopen(name, "rb");
	if (fp == NULL){
		perror("Error when opening file");
		exit(-1);
	}
	// Fill array
	fread(data, sizeof(int), size, fp);
	// Sort array
	call_quick(data, size);
	// Print numbers
	int i;
	for (i=0; i<size; i++)
		printf("%d ", data[i]);
}
