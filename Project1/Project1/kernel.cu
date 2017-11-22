#include "kernel.h"

__global__ void vectorAddKernel(float *a, float *b, float *c, int n) {
	// Escribir en c la suma de a y b
};


void vectorAdd(float *a, float *b, float *c, int n) {
	size_t size = n * sizeof(float);

	float *d_a = NULL;
	float *d_b = NULL;
	float *d_c = NULL;

	//malloc en cuda para d_a, d_b y d_c

	//copiar los datos de a y b a d_a y d_b respectivamente

	//llamada al kernel
	vectorAddKernel<<<1, 1 >>>(d_a, d_b, d_c, n);

	//copiar los datos de vuelta. Los datos calculados y guardados en d_c han de ser copiados a c.

	//liberar memoria que ya no se necesita
};
