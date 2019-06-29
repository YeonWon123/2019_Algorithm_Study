#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    
    int a;
    a = N / 5;
    for (int i = a; i >= 0; i--) {
        for (int j = 0; ; j++) {
            int sum = i * 5 + j * 3;
            if (sum == N) {
                cout << i + j;
                return 0;
            }
            else if (sum > N)
                break;
        }
    }
    
    cout << -1;
    return 0;
}