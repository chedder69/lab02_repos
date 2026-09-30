#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   
    double R;  
    double y;  

   
    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

   
    if (R <= 0)
    {
        cout << "R не може бути відємним" << endl;
        return 0;
    }


   

   
    if (x <= -1 - R)
    {
        y = -x - 1 - R;
    }


    else if (x <= -1)
    {
        y = sqrt(
            R * R -
            (x + 1) * (x + 1)
        );
    }

  
    else if (x <= 1)
    {
        y = R;
    }

   
    else if (x <= 2)
    {
        y = R - (R + 1) * (x - 1);
    }

    
    else
    {
        y = -1;
    }


   
    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}