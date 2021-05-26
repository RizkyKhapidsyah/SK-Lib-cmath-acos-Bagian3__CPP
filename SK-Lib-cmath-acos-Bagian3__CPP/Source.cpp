#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int x = -1;
	double result;

	result = acos(x);

	cout << "acos(x) = " << result << " radians" << endl;
	// Converting result to degrees
	cout << "acos(x) = " << result * 180 / 3.1415 << " degrees";

	_getch();
	return 0;
}