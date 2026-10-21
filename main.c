#include <stdio.h>
#include "vectors.h"
void print_vector(size_t n, float vector[]) {
	for(int i = 0; i<n; i+=1) {
		printf("%f \n", vector[i]);
	}
}
void main() {
	float res[8];
	float a[8] = {4.950, 2.942, 9.398, 1, 0, 14.3, 0.25, 8.935};
	float b[8] = {4.950, 2.942, 9.398, 1, 0, 14.3, 0.25, 8.935};

	float c[3] = {14.33, 9.274, 8.935};
	float d[3] = {4.3, 0.252, 2.934};

	size_t n   = sizeof(a)/sizeof(float);

	printf("[8]a and [8]b are qual. \n");
	printf("\n");

	printf("a-b: \n");
	sub(n, &a, &b, &res);
	print_vector(n, &res);
	printf("\n");

	printf("a+b: \n");
	sum(n, &a, &b, &res);
	print_vector(n, &res);
	printf("\n");

	printf("a.b = %f \n", dot(n, &a, &b));
	printf("\n");

	printf("c and d are just random vectors\n");
	printf("cxd: \n");
	cross(&c, &d, &res);
	print_vector(3, &res);
}
