#include "func.h"
#include <bits/stdc++.h>
using namespace std;
float P = 3.141592653589793238466;
void GCircle(float x, float y, float r)
{
    float per = 2*P*r;
    float area = P*pow(r,2);
    cout << "Circle(" << x <<"," << y << "," << r << ")" << endl <<
    "Perimetr = " << per << endl << "Area = " << area;
}
void GTriangle(float x1,float x2,float x3, float y1, float y2, float y3)
{
	float a = sqrt(sqr(x2 - x1) + sqr(y2 - y1));
	float b = sqrt(sqr(x3 - x1) + sqr(y3 - y1));
	float c = sqrt(sqr(x3 - x2) + sqr(y3 - y2));
	float per = a + b + c;
	float pper = per/2;
	float area = sqrt(pper(pper-a)(pper-b)(pper-c));
	cout << "Triangle(" << x1 <<"," << x2 << "," << x3 << "," << y1 << y2 <<
	y3 << ")" << endl <<
    "Perimetr = " << per << endl << "Area = " << area;
}
int prompt_menu_item()
{
    int variant;
	cout << "1. Circle \n"
    << "2. Triangle \n"
    << endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}
