#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{ 
	int T, a, i, p;
	double n = 2, m, k;
	cin >> T;
	while (T > 0)
{
	for (i = 0; i < T; i++)
	{
    	cin >> a;
		if (a >= 1 && a <= 1E09)
      	{
	   	k = (double) a ;
    	m = log(k) / (log(n));
    	p = (int) m;
    	cout << p << endl;}
     	else
      	{
	  	return 0;
	}

};  return 0;
}
      
    return 0;
}
