#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float w = 1;
    float x = 1;

    cout << "Enter w : ";
    cin >> w;
    cout << "Enter x : ";
    cin >> x;

    float y = w * pow(x, -5.3) * (exp(log10(abs(x) - 1)) - sqrt(abs((w * x - 3) - 1)))/\
    (pow(acos(pow(w, -1)), 2) + atan(x / M_PI));

    printf("Result for first task : %0.3f", y);
    ////////////////
    float k = 1;

    cout << "\n\nEnter x : ";
    cin >> x;
    cout << "Enter k : ";
    cin >> k;

    float I = (1 / exp(-k * x + 0.5)) * ((log10(abs(k + x)) - sqrt(pow(sin(x), 4)))/\
    (abs(atan(x + 1 / x - k) + (M_PI / 10) * log(M_PI)) + 1) + 2);

    printf("Result for second task : %0.3f", I);
}
