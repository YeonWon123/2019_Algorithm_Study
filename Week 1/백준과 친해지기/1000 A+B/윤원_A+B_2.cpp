#include <iostream>
using namespace std;

int main()
{
    // cin과 cout은 속도가 느려서, 이 두 줄을 쓰자!
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a;
    int b;
    cin >> a >> b;
    cout << a+b;
}