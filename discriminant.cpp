#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;


int main() 
{
	int a,b,c;
	double D,x1,x2,x;
	cin >> a;
	if (a==0)
	{
	cout << "Incorrect input" << endl;
	return 0;
	}
	else
	cin >> b;
	cin >> c;
	
	D = b*b-4*a*c;
	
	if (D > 0)
{
	x1 = (-b+sqrt(D))/(2*a);
	x2 = (-b-sqrt(D))/(2*a);
	cout << x1 << " " << x2 << endl; 
}
	else if (D == 0)
{
	x = -b/(2*a);
	cout << x << " " << x <<  endl;
}
	else cout << "No real roots" << endl;
	return 0;
}
