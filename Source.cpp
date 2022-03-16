// Персональный шаблон проекта С++
#include <iostream>
using namespace std;

template <typename T> void showArray(T array[], int length);
template <typename T> double meanArray(T array[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n";
	double z1[5] = { 1.6, 1.4, 0.0, 1.0, 1.5 };
	showArray(z1, 5);
	cout << "Ср. арифм. массива = " << meanArray(z1, 5) << ".\n\n";


	return 0;
}
// Задача 1
template <typename T> double meanArray(T array[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}
template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}

