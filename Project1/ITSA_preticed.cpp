#include <iostream>
using namespace std;

int main() {
	int X, Y;
	int ori, val;
	int r = 100;
	cin >> X >> Y;
	ori = X * X + Y * Y;
	val = r * r;
	if (ori > val) cout << "outside" << endl;
	else cout << "inside" << endl;
	return 0;
}