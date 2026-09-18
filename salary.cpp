#include <iostream>
using namespace std;

int main() {

	const int size = 20;

	// Dynamically allocate memory
	int* salArray = new int[size];

	// Input salaries
	for (int i = 0; i < size; i++) {

		cout << "Enter the Salary of employee " << i + 1 << ": ";
		cin >> salArray[i];

	}

	// Update salaries
	for (int j = 0; j < size; j++) {

		salArray[j] = salArray[j] + salArray[j] / (j + 1);

	}

	// Display updated salaries
	for (int k = 0; k < size; k++) {

		cout << "Updated Salary of employee " << k + 1
			<< ": " << salArray[k] << endl;

	}

	// Free dynamically allocated memory
	delete[] salArray;

	system("pause");
	return 0;
}