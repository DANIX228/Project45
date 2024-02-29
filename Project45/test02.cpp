//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//const int n = 10;
//	int size;
//
//	do {
//		cout << "Input size of array: ";
//			cin >> size;
//	} while (size <= 0);
//
//	int* array = new int[size];
//	int* first = array;
//
//	for (int i = 0; i < size; i++)
//	{
//		*(array++) = rand() % 100;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(--array) << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(array + i) << " ";
//	}
//
//	delete[] first;
//
//	return 0;
//}