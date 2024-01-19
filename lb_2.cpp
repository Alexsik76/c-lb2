#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int n, i;
float q = -3.14, r = 3.14, b = -2.111111, c = 0.5, d = 2;
double x_2 = c, x_1 = d, x;
int main()
{
    cout << "Enter the value of the argument n(int, n > 1): ";
    cin >> n;
    cout << "\n";
    if (n < 2)
    {
        cout << "The value of n is invalid.\n";
        system("pause");
        return 0;
    }
    for (i = 2; i <= n; i++)
    {
        x = q * x_1 + r * x_2 + b;
        cout << "----------------------------\n";
        printf("n = %i --> x = %f \n", i, x);
        x_2 = x_1;
        x_1 = x;
        if (isinf(x))
        {
            printf("With n >= %i, x = Infinity \n", i);
            break;
        }
    }
    cout << "================================\n";
    printf("With \tn = %i \n\tx = %f \n", n, x);
    system("pause");
    return 0;
}
