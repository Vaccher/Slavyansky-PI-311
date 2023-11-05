#include <iostream>

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
    double p=1;
    for (int i = 2; i < 5; i++) {
        p = p * pow(1 - 1 / fact(i), 2);
    }
    cout << "p=" << p;
}
