#include <stdio.h>
#include <stdlib.h>
int main () {
	//set array in cycle for 
	const int ARRAY_SIZE   = 20;
	const int LEFT_BORDER  = 0;
	const int RIGHT_BORDER = 50;
	
	int v[ARRAY_SIZE];
	int numEvenElements = 0;
	int numOddElements = 0;

	for (int i = 0; i<ARRAY_SIZE; i++) {
		v[i] = rand()%(RIGHT_BORDER - LEFT_BORDER + 1) + LEFT_BORDER;
	}
	printf("Test v5.01: OK.\n");
	printf("ARRAY_SIZE: %d.\n", ARRAY_SIZE);
	printf("LEFT_BORDER: %d.\n", LEFT_BORDER);
	printf("RIGHT_BORDER: %d.\n", RIGHT_BORDER);
	//output array
	for (int i = 0; i<ARRAY_SIZE; i++) {
		printf("v: %d.\n", v[i]);
	}

	//Calculate number of positive elements
	for (int i = 0; i<ARRAY_SIZE; i++) {
		if (v[i]%2 == 0){
			numEvenElements++ ;
		}	
		else{
			numOddElements++ ;
		}
	}

			printf("chet: %d\n", numEvenElements);
			printf("nechet: %d\n", numOddElements);
	return 0;
}
