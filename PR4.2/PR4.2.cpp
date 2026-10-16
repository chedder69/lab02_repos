#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx;
    double A, B, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "-------------------------" << endl;
    cout << "|" << setw(10) << "x"
        << " |" << setw(10) << "y"
        << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        // Спільна 
        A = 2 * fabs(5 - x);

      
        if (x <= -1)
        {
            B = exp(fabs(2 + x));
        }
        else if (x < 1)
        {
            B = pow(sin(1 / fabs(2 + x)), 2);
        }
        else
        {
            B = pow(cos(x), 2) /
                (1 + fabs(sin(x)));
        }

        y = A + B;

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(10) << setprecision(4) << y
            << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}