#include<iostream>
#include<cmath>
using namespace std;

using namespace std;
double findDistance(double a, double b, double c) {
	double A = a * b + (0.5)*c*pow(b, 2);
	return A;
}

int main(){
	float u, a, t;
	cout << "Enter speed :";
	cin >> u;
	cout << "Enter acceleration :";
	cin >> a;
	cout << "Enter time :";
	cin >> t;
	cout << "Distance is : " << findDistance(u, t, a);

  return 0;
}
