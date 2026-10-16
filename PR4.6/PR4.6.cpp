#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double S, P, c;
    int n, k;

    cout << fixed << setprecision(12);

    // 1. while

    S = 0;
    n = 1;

    while (n <= 25)
    {
        P = 1;
        k = 1;

        while (k <= n)
        {
            c = cos(k + n);
            P *= sqrt(c * c);

            k++;
        }

        S += cos(n) + P;

        n++;
    }

    cout << "while:      " << S << endl;


    // 2. do...while

    S = 0;
    n = 1;

    do
    {
        P = 1;
        k = 1;

        do
        {
            c = cos(k + n);
            P *= sqrt(c * c);

            k++;
        } while (k <= n);

        S += cos(n) + P;

        n++;
    } while (n <= 25);

    cout << "do...while: " << S << endl;


   
    // 3. for зі збільшенням n і k


    S = 0;

    for (n = 1; n <= 25; n++)
    {
        P = 1;

        for (k = 1; k <= n; k++)
        {
            c = cos(k + n);
            P *= sqrt(c * c);
        }

        S += cos(n) + P;
    }

    cout << "for ++:     " << S << endl;


    // 4. for зі зменшенням n і k


    S = 0;

    for (n = 25; n >= 1; n--)
    {
        P = 1;

        for (k = n; k >= 1; k--)
        {
            c = cos(k + n);
            P *= sqrt(c * c);
        }

        S += cos(n) + P;
    }

    cout << "for --:     " << S << endl;

    return 0;
}