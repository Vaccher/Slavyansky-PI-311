#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cin >> x;
	if (x < -5)
		y = x + 1;
	else if (x >= 3)
		y = x * 10;
	else
		y = 3 * x + 2;
	cout << "x" << x << " y=" << y;

}
