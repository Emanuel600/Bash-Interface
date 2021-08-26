/*
 * Sorts data entered
 */

#include <stdio.h>
#include <time.h>

// Return partition index(IP)
int partir(int* dados, int baixo, int alto){
	int pivo = dados[alto];
	int temp;

	int i = baixo - 1;

	for (int j = baixo; j<=alto-1; j++){
		if (dados[j] < pivo){
			i++; // Smaller than pivot, goes to the 'left'

			temp = dados[j];
			dados[j] = dados[i];
			dados[i] = temp;
		}
	}
	// Switches pivot and last element
	temp = dados[alto];
	dados[alto] = dados[i+1];
	dados[i+1] = temp;

	return i+1;
}
// Sorts array recursively
void quicksort(int* dados, int baixo, int alto){
	if (baixo<alto){
		// Splits current block into two
		int ip = partir(dados, baixo, alto);
		// Calls quicksort on both blocks
		quicksort(dados, baixo, ip-1);
		quicksort(dados, ip+1, alto);
	}
}
// Calls quicksort with necessary parameters
void call_quick(int* dados, int tamanho){
	quicksort(dados, 0, tamanho-1);
}
