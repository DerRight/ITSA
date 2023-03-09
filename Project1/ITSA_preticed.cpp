#include <iostream>
using namespace std;

void ParkingCost(int START_HR, int START_MIN, int END_HR, int END_MIN) {
	int TOTAL_HR = 0, TOTAL_MIN = 0;
	TOTAL_HR = START_HR - END_HR;
	TOTAL_MIN = START_MIN - END_MIN;
	cout << TOTAL_HR << TOTAL_MIN << endl;
}

int main() {
	int START_HR, START_MIN;
	int END_HR, END_MIN;

	cin >> START_HR >> START_MIN;
	cin >> END_HR >> END_MIN;
	ParkingCost(START_HR, START_MIN, END_HR, END_MIN);
	return 0;
}