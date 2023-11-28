// Anh Truong
#include <iostream>
using namespace std;

int main() {
	// Declaring arrays of intergers called my_ints with the size of 4
	int my_ints[4];
	// Defining an array of pointers called my_ptrs to point to the elements of my_intgs
	int *my_ptrs[4];

	// Sorting the array of pointers to the pointer index at 0
	for (int i = 0; i < 4; i++) {
		cin >> my_ints[i];
		my_ptrs[i] = &my_ints[i];
	}

	// Sorts starting from the smallest element of the array to the larger elements.
	int *min;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (*my_ptrs[j] > *my_ptrs[j + 1]) {
				min = my_ptrs[j];
				my_ptrs[j] = my_ptrs[j + 1];
				my_ptrs[j + 1] = min;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << "Memory Location: " << my_ptrs[i] << endl;
		cout << "Value: " << *my_ptrs[i] << endl;
			 
	}

  return 0;
}