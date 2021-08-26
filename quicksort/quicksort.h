
#ifndef QUICKSORT_H_
#define QUICKSORT_H_

// Return partition index
int partir(int* dados, int baixo, int alto);
// Call quicksort recursively
void quicksort(int* dados,int baixo, int alto);
// Calls quicksort with necessary parameters
void call_quick(int* dados, int size);

#endif /* QUICKSORT_H_ */
