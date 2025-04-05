/*
made by AxoGM
*/

#include <iostream>
using namespace std;

// calculate bmi
int main()
{
	// input
	double w; // weight (kg)
	double h; // height (m)
	double bmi;

	cout << "enter weight (kg): ";
	cin >> w; // input weight

	cout << "enter height (m): ";
	cin >> h; // input height

	// process
	bmi = (w / (h * h));

	// output
	cout << bmi;

	return 0;
}
