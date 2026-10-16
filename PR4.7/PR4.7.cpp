#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, eps;
    double x, a, R, S, F;
    int n, terms;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << "eps = ";
    cin >> eps;

    if (dx <= 0 || xp > xk || eps <= 0)
    {
        cout << "Incorrect input data." << endl;
        return 1;
    }

    cout << fixed;

    cout << "-----------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << " |" << setw(12) << "Arcth(x)"
        << " |" << setw(12) << "S"
        << " |" << setw(7) << "terms"
        << " |" << endl;
    cout << "-----------------------------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        
        if (fabs(x) <= 1)
        {
            cout << "|" << setw(8) << setprecision(3) << x
                << " |" << setw(12) << "undefined"
                << " |" << setw(12) << "-"
                << " |" << setw(7) << "-"
                << " |" << endl;

            x += dx;
            continue;
        }

        // Перший доданок
        n = 0;
        a = 1.0 / x;
        S = a;
        terms = 1;

        // Наступні доданки рекурентно
        do
        {
            n++;

            R = (2.0 * n - 1) /
                ((2.0 * n + 1) * x * x);

            a *= R;
            S += a;

            terms++;

        } while (fabs(a) >= eps);

        // Точне значення функції
        F = 0.5 * log((x + 1) / (x - 1));

        cout << "|" << setw(8) << setprecision(3) << x
            << " |" << setw(12) << setprecision(7) << F
            << " |" << setw(12) << setprecision(7) << S
            << " |" << setw(7) << terms
            << " |" << endl;

        x += dx;
    }

    cout << "-----------------------------------------------------" << endl;

    return 0;
}