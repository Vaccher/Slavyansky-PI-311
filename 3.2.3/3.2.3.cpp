#include <iostream>

using namespace std;

int main()
{
	float p = 1;
	for (int i = 1; i <= 5; i++)
	{
		p = p * i / (i + 3 * i);
	}
	cout << "p=" << p;
}