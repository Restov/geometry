#include "circle.h"
#include <cmath>
#include <iostream>
using namespace std;
float P = 3.14;
bool CircleCheck(char* x, char* y, char* r)
{
    float x1, y1, r1;
    if (isdigit(x[0]) || isdigit(x[1])) {
        x1 = atof(x);
        if (x1 < 987654 && x1 >= 1) {
            if (isdigit(y[0]) || isdigit(y[1])) {
                y1 = atof(y);
                if (y1 < 987654 && y1 >= 1) {
                    if (isdigit(r[0])) {
                        r1 = atof(r);
                        if (r1 < 987654 && r1 >= 1) {
                            return true;
                        } else
                            return false;
                    } else
                        return false;
                } else
                    return false;
            } else
                return false;
        } else
            return false;
    } else
        return false;
}
float CircleArea(char* r1)
{
    float r = atof(r1);
    float area = P * r * r;
    return area;
}
float CirclePerimetr(char* r1)
{
    float r = atof(r1);
    float per = 2 * P * r;
    return per;
}
void CircleOut(char* x, char* y, char* r)
{
    cout << "circle(" << x << " " << y << ", " << r << ")" << endl;
    cout << "\tperimeter = " << CirclePerimetr(r) << endl;
    cout << "\tarea = " << CircleArea(r) << endl;
}