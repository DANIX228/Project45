#include <iostream>
#include <cmath>

float sum_of_negative_values(float* vector, int size) {
	float sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) < 0) {
			sum = sum + *(vector + i);
		}
	}

	return sum;
}

float double_of_values(float* vector, int size) {
	float product = 1;

}