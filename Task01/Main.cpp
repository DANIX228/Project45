#include <iostream>

using namespace std;

void random_init(float* vector, int size, int a, int b);
string vector_to_string(float* vector, int size);


int main() {
	int size;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	float* vector = new float[size];
	
	random_init(vector, size, -10, 10);

	cout << vector_to_string(vector, size) << endl;
	
	delete[] vector;
	return 0;
}