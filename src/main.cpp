#include "func.h"
#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14;
    char x[100];
    char y[100];
    char r[100];
    cin >> x >> y >> r;
    CircleCheck(x, y, r);
}