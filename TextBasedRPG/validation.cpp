#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void getJudgeData(double &score)
{
	bool valid_input = false;

	do {
		cout << "Enter your socre" << endl;
		cin >> score;

		if (!(valid_input = cin.good()) || score > 10 || score < 0) {
			cout << "That input is invalid!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	} while (!valid_input);

}