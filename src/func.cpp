#include "func.h"
#include <iostream>
#include <cmath>
using namespace std;
float P = 3.141592653589793238466;
void GCircle(float x, float y, float r)
{
    float per = 2 * P * r;
    float area = P * pow(r, 2);
    cout << "Circle(" << x << "," << y << "," << r << ")" << endl
         << "Perimetr = " << per << endl
         << "Area = " << area;
}

