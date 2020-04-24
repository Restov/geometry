#include "circle.h"
#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    char x[100];
    char y[100];
    char r[100];
    cin >> x >> y >> r;
    CircleCheck(x, y, r);
}