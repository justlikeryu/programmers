#include <iostream>

using namespace std;

int main(void) {
	int A, B;

	while (true) {
		cin >> A >> B;

		if (A == 0 && B == 0) {
			break;
		}

		cout << A + B << "\n";
	}
	return 0;
}