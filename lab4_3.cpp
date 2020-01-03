#include<iostream>
#include<cmath>
using namespace std;

void findDivisor(int a) {
	for (int i = 2; i <= a; i++) {
		if (a%i == 0) {
			cout << i;
			break;
		}
	}
}

int main() {
	int x;
	cout << "Enter value : ";
	cin >> x;
	cout << "Divisor is : ";
	findDivisor(x);

	return 0;
}
