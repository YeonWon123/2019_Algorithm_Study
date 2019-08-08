#include <iostream>
using namespace std;
float score[1000];
float new_score[1000] = {0,};
float result=0;
int main() {
	int count;
	//int score[1000];
	int max=0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> score[i];//cout << score[i]<<endl;
		if (score[i] > max) {
			max = score[i]; //cout << max;
		}
	}
	for (int i = 0; i < count; i++) {
		new_score[i] = score[i]/max*100;
	//	cout << new_score[i] << endl;
		result += new_score[i];
	}
	cout << fixed;
	cout << result / count;
	
}