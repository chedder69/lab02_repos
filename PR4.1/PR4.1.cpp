#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int N, k;
    double S;

    cout << "N = ";
    cin >> N;

 
    S = 0;
    k = 1;

    while (k <= N)
    {
        S += (1 + sqrt(1.0 + k * k)) / (k * k);
        k++;

    }

    cout << fixed << setprecision(6);
    cout << "while:      " << S << endl;


  
    S = 0;
    k = 1;

    do
    {
        S += (1 + sqrt(1.0 + k * k)) / (k * k);
        k++;
    } while (k <= N);

    cout << "do...while: " << S << endl;


  
    S = 0;

    for (k = 1; k <= N; k++)
    {
        S += (1 + sqrt(1.0 + k * k)) / (k * k);
    }

    cout << "for k++:    " << S << endl;


  
    S = 0;

    for (k = N; k >= 1; k--)
    {
        S += (1 + sqrt(1.0 + k * k)) / (k * k);
    }

    cout << "for k--:    " << S << endl;

    return 0;
}