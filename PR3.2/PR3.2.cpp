#include <iostream>

using namespace std;

int main()
{
    double a;  
    double b;   
    double c;  
    double x;  

    double F1;
    double F2;  

   
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "x = ";
    cin >> x;


    if (c == 0 && x <= 1.5)
    {
        cout << endl;
        cout << "F неможлива бо ділення на 0" << endl;

        return 0;
    }


    //
    if (x < 1 && c != 0)
    {
        F1 = a * x * x + b / c;
    }

 
    if (x > 1.5 && c == 0)
    {
        F1 = (x - a) / ((x - c) * (x - c));
    }

   
    if (!(x < 1 && c != 0) &&
        !(x > 1.5 && c == 0))
    {
        F1 = (x * x) / (c * c);
    }

    cout << endl;
    cout << "1) F = " << F1 << endl;


    //


    if (x < 1 && c != 0)
    {
        F2 = a * x * x + b / c;
    }
    else
    {
        if (x > 1.5 && c == 0)
        {
            F2 = (x - a) / ((x - c) * (x - c));
        }
        else
        {
            F2 = (x * x) / (c * c);
        }
    }

    cout << "2) F = " << F2 << endl;

    return 0;
}