#include "func.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, y, r;
    float x1, x2, y1, y2, x3, y3;
    int variant = prompt_menu_item();
    switch (variant) {
    case 1: {
        cin >> x >> y >> r;
        GCircle(x, y, r);
        break;
    }
    case 2: {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
        GTriangle(x1, x2, x3, y1, y2, y3);
        break;
    }
    }
}
