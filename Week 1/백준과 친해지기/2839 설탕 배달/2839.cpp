//#include "stdafx.h"
#include<iostream>

using namespace std;
int total;

int main() {
	int count1 = 0,count2=0;
	cin >> total;
	while (total != 0) {
		if (total % 5 == 0) {
			count1 += total / 5;
		//	cout << "½ÇÇàµÊ";
			break;
			//total
		}
	//	else if (total % 3 == 0) {
	//		count2 += total / 3;
	//		break;
	//	}
		else {
			total -= 3;
			if (total < 0) {
				cout << -1;
				return 0;
			}
			count2++;
		}
	}
	cout << count1+count2;
	return 0;
}