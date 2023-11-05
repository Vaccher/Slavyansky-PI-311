#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "B=";
	cin >> b;
	if (a > b)
		a++;
	else if (b > a)
		b++;
	cout << "a=" << a << " b=" << b;

}