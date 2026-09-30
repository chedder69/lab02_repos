#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;      

    double A;     
    double B;     

    double y1;     
    double y2;    

    cout << "x = ";
    cin >> x;

    A = 2 * abs(5 - x);


   
    if (x <= -1)
    {
        B = exp(abs(2 + x));
    }

    if (-1 < x && x < 1)
    {
        B = pow(sin(1.0 / abs(2 + x)), 2);
    }

    if (x >= 1)
    {
        B = pow(cos(x), 2) /
            (1 + abs(sin(x)));
    }

    y1 = A - B;

    cout << endl;
    cout << "1) y = " << y1 << endl;
   
   

   
    if (x <= -1)
    {
        B = exp(abs(2 + x));
    }
    else
    {
        if (x < 1)
        {
            B = pow(sin(1.0 / abs(2 + x)), 2);
        }
        else
        {
            B = pow(cos(x), 2) /
                (1 + abs(sin(x)));
        }
    }

    y2 = A - B;

    cout << "2) y = " << y2 << endl;
   
    return 0;
}
