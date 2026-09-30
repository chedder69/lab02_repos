#include <iostream>

using namespace std;

int main()
{
    double x;   
    double y;   
    double R;   

    
    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if (R <= 0)
    {
        cout << "R must be greater than 0" << endl;
        return 0;
    }

    if ((x * x + y * y <= R * R &&
        x >= 0 &&
        y >= 0)
        ||
        (x <= 0 &&
            y <= 0 &&
            y >= -x - R))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}