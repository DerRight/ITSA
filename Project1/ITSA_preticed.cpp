#include <iostream>
#include <bitset>
using namespace std;

void DecTObin(int Dec) {
	int Tran_Bin;
	if (Dec < 0) Dec += 256;
	bitset<10> bit(Dec);
	cout << Dec << endl;
}

int main() {
	int Dec_num;

	cin >> Dec_num;
	DecTObin(Dec_num);
	return 0;
}