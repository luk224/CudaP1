#include <cstdio>
#include <cstdlib>

#include <cmath>

#include "kernel.h"

void initData(float *a, float *b, int numElements) {
	for (int i = 0; i < numElements; i++) {

		a[i] = rand() / (float)RAND_MAX;
		b[i] = rand() / (float)RAND_MAX;
	}
};

void verify(float *a, float *b, float *c, int numElements) {
	for (int i = 0; i < numElements; i++) {
		if (fabs(a[i] + b[i] - c[i]) > 1e-5) {
			printf("ERROR: Suma Incorrecta\n");
			return;
		}
	}
	printf("Test correcto!\n");
};



int main(int arc, char *argv[]) {
	printf("Hola Mundo!\n");

	int numElements = 10;
	size_t size = numElements * sizeof(float);

	float *h_a = (float*)malloc(size);
	float *h_b = (float*)malloc(size);
	float *h_c = (float*)malloc(size);

	initData(h_a, h_b, numElements);

	//vectorAdd

	verify(h_a, h_b, h_c, numElements);

	getchar();

	free(h_a);
	free(h_b);
	free(h_c);

	return (0);
}