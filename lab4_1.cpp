#include<iostream>
#include<cmath>
using namespace std;


double FindValue(double a) {
	double A = 3*pow(a,3)+2*2.71828+pow(2,(2*a)+1)+sqrt(pow(a,2)+1);
	return A;
}

int main() {
	int x;
	cout << "Enter x : ";
	cin >> x;
	cout << "Result y : " << FindValue(x);

	return 0;

}
