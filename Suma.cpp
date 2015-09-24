#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int T, i, a, b, c;
	cin >> T;
	for (i = 0; i < T; i++)
		{
	cin >> a >> b;
	c = a + b;
	cout << c << endl;
	}
	return 0;
}
