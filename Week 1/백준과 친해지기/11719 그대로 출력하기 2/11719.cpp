//#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	char ch[100];
	//ch = getchar();
//	for (int i = 0; i < 100; i++) {
	//	gets_s(ch);
	while (fgets(ch, sizeof(ch), stdin) != NULL)
		//break;
		cout << ch;
	//}
	//for (int i = 0; i < 100; i++)

	return 0;
}