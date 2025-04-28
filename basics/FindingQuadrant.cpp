#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Insert the value for variable X and Y : ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Point (" << x << ", " << y << ") lies in the First quadrant\n";
    
    else if (x < 0 && y > 0)
        cout << "Point (" << x << ", " << y << ") lies in the Second quadrant\n";
    
    else if (x < 0 && y < 0)
        cout << "Point (" << x << ", " << y << ") lies in the Third quadrant\n";
    
    else if (x > 0 && y < 0)
        cout << "Point (" << x << ", " << y << ") lies in the Fourth quadrant\n";
    
    else if (x == 0 && y == 0)
        cout << "Point (" << x << ", " << y << ") lies at the Origin\n";
    
    else if (y == 0 && x != 0)
        cout << "Point (" << x << ", " << y << ") lies on the X-axis\n";
    
    else if (x == 0 && y != 0)
        cout << "Point (" << x << ", " << y << ") lies on the Y-axis\n";

    return 0;
}
