#include "func.h"
#include <bits/stdc++.h>
using namespace std;
void GCircle(float x, float y, float r)
{
    float per = 2*P*r;
    float area = P*pow(r,2);
    cout << "Circle(" << x <<"," << y << "," << r << ")" << endl <<
    "Perimetr = " << per << endl << "Area = " << area;
}
