#include "circle.h"
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
    char x[15];
    char y[15];
    char r[15];
    cin >> x >> y >> r;
    if (CircleCheck(x, y, r)) {
        CircleOut(x, y, r);
    }
}