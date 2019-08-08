#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 0, X = 0;
	int entry = 0;
	vector<int>v;
	cin >> N >> X;
	//v.assign(N, 0);
	for (int i = 0; i < N; i++) {
		//cin >> v.insert(i);
		cin >> entry;
		if (entry < X) {
			v.push_back(entry);
			//cout << entry << " ";
		}
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}