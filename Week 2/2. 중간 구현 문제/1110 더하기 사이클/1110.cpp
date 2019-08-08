#include <iostream>
using namespace std;

int main() {
	int input = 0;
	int change = 0;
	int f, s;
	int sum = 0;
	int length = 0;
	cin >> input;
	if (input < 10)
		change = input * 10;
	//change = input;
	f = input / 10;
	s = input % 10;
	sum = (f + s) % 10;
	change = s * 10 + sum;
	length++;
	while (input != change) {
		length++;
		
		
		f = change / 10;
		s = change % 10;
		sum = (f + s) % 10;
		change = s * 10 + sum;
		//cout << change << " ";

	}
	cout << length;
}