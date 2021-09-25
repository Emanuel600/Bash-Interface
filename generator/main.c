/*
 * Manage subcode accordingly
 */

#include <stdio.h>

#include "data_manager.h"

int main(){
	int size;
	// Reads size
	scanf("%d", &size);
	/* Generate, store and print data */
	int* data = create(size);
	data = fill(data, size);
	print_data(data, size);
}
