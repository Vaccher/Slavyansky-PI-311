#include <iostream>
#include <cmath>

using namespace std;

float fact(int a)
{
	float fa = 1;
	for (int i = 1; i <= a; i++)
		fa *= i;
	return fa;
	
}

int main()
{
	float a = 0.1, b = 1, n = 100, y, x, s, h;
	h = (b - a) / 10;
	cout << "h=" << h << endl;
	for (a; a < b; a += h) {
		x = a;
		y = (1 - pow(x, 2) / 2) * cos(x) - (x / 2) * sin(x);
		cout << "y=" << y<<"; ";
		s = 0;
		for (int i = 1; i <= n; i++)
		{
			s = s + pow(-1, i) * (2 * pow(i, 2) + 1) / fact(2 * i) * pow(x, 2 * i);
		}
		cout << "s=" << s << "; " << endl;
	}
}
