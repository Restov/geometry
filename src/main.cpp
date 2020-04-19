
#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14;
    char x[10];
    char y[10];
    char r[10];
    float x1, y1, r1;
    cin >> x >> y >> r;
    if (isdigit(x[0]) || isdigit(x[1])) {
        x1 = atof(x);
        if (isdigit(y[0]) || isdigit(y[1])) {
            y1 = atof(y);
            if (isdigit(r[0])) {
                r1 = atof(r);
                // cout << x1 << " " << y1 << " " << r1;
                cout << "circle(" << x1 << " " << y1 << ", " << r1 << ")"
                     << endl;
                cout << "\tperimeter = " << 2 * pi * r1 << endl;
                cout << "\tarea = " << pi * r1 * r1 << endl;
            } else
                cout << "Error";
        } else
            cout << "Error";
    } else
        cout << "Error";
    return 0;
}