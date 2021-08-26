
#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"

int main(){
	int size, i;

	scanf("%d", &size);
	// Allocate space for array
	int* data = malloc(size* sizeof(int));
	// Fill array
	for (i=0; i<size; i++)
		scanf("%d ", &data[i]);
	// Sort array
	call_quick(data, size);
	// Print results in stdout
	for (i=0; i<size; i++)
		printf("%d ", data[i]);
}
