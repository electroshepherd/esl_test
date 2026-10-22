#include "vectors.h"
void sum(const float* a, const float* b, float* res) {
        for(int i = 0; i < 3; i+=1) {
        	res[i] = a[i] + b[i];
        }
}     
void sub(const float* a, const float* b, float* res) {
        for(int i = 0; i < 3; i+=1) {
        	res[i] = a[i] - b[i];
        }
}     
void cross(const float* a, const float* b, float* res) {
	res[0] = (a[1]*b[2] - a[2]*b[1]);
	res[1] = (a[2]*b[0] - a[0]*b[2]);
	res[2] = (a[0]*b[1] - a[1]*b[0]);
}
float dot(const float* a, const float* b) {
	float result = 0;
	for(int i = 0; i<3; i+=1) {
		result += a[i]*b[i];
	}
	return result;
}
