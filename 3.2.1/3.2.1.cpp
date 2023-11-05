#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 3.5, i = 2, b = -7, x = 0.8;
    float y = pow(10, 4) * pow(sin(i), 2) - (0.32 * pow(x, 3) + 4 * x + b) / cos(i * a) * pow((0.32 * pow(x, 3) - b),1/6) + abs(b);
    cout << "y=" << y;
}
