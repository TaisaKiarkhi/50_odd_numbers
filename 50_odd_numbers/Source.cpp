#include <iostream>
using namespace std;

int main() {
	const size_t array_size_max{ 100 };
	int odd_array[array_size_max]{ 2 };
	int count_odds{ 1 };
	int trial{ 3 };

	while (count_odds < array_size_max) {
		if (trial % (*odd_array) > 0) {
			*(odd_array + count_odds) = trial;
			count_odds++;
		}
		trial += 2;
	}

	int ten_per_line{ 0 };

	cout << "Output the array: " << endl;
	for (int i{}; i < array_size_max; i++) {
		cout << (*odd_array + i) << " ";
		if (ten_per_line == 10) {
			cout << endl;
			ten_per_line=0;
		}
		ten_per_line++;
		
	}
	cout << endl << endl;
	cout << "Output the array (reverse): " << endl;
	for (int i{}; i < array_size_max; i++) {
		cout << ((*odd_array + (array_size_max-1))-i) << " ";
		if (ten_per_line == 10) {
			cout << endl;
			ten_per_line = 0;
		}
		ten_per_line++;

	}
	return 0;
}