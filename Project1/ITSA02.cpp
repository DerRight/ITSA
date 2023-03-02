#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int mile;
	double km;

	cin >> mile;
	km = 1.6 * mile;
	cout << fixed << setprecision(1) << km << endl;
	return 0;
}