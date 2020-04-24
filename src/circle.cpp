#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;
float P = 3.14;
int CircleCheck(char* x, char* y, char* r)
{
    float x1, y1, r1;
    if (isdigit(x[0]) || isdigit(x[1])) {
        x1 = atof(x);
        if (x1 < 987654) {
            if (isdigit(y[0]) || isdigit(y[1])) {
                y1 = atof(y);
                if (y1 < 987654) {
                    if (isdigit(r[0])) {
                        r1 = atof(r);
                        if (r1 < 987654) {
                            CircleOut(x1, y1, r1);
                        } else
                        cout << "Error";
                    } else
                    cout << "Error";
                } else
                cout << "Error";
            } else
            cout << "Error";
        } else
        cout << "Error";
    } else
    cout << "Error";
    return 0;
}
float CircleArea(float r)
{
    float area = P * r * r;
    return area;
}
float CirclePerimetr(float r)
{
    float per = 2 * P * r;
    return per;
}
void CircleOut(float x1, float y1, float r1)
{
    cout << "circle(" << x1 << " " << y1 << ", " << r1 << ")" << endl;
    cout << "\tperimeter = " << CirclePerimetr(r1) << endl;
    cout << "\tarea = " << CircleArea(r1) << endl;
}