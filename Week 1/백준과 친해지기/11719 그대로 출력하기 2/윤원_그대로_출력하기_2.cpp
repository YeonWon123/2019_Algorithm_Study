#include <iostream>
using namespace std;

int main()
{
	char inputs[101];
    
    while(fgets(inputs, 101, stdin))
    {
        cout << inputs;
    }

    return 0;
    
}