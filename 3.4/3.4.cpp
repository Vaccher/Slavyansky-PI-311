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
    float S=0;
    for (int i = 0; i < 10; i++) {
        S = S + (pow(-1, i + 1) / fact(pow(i, 2)));

    }
    cout << "S=" << S;
}
