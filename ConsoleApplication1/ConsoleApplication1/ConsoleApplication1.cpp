#include <iostream>
using namespace std;

int main()
{
	int a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b;
	cout << sum << endl;
	sum = a + c;
	cout << sum << endl;
	sum = c + b;
	cout << sum << endl;
}


/*
int ex = 15;

void example()
{
	cout << "global variable=" << ex << endl;
}

int main()
{
	int ex = 5;
	cout << "local variable=" << ::ex << endl;
	example();
}
*/

/*
void sum(int a, int b)
{
	int summ = a + b;
	cout << summ << endl;
}
*/