#include "func.h"
#include <iostream>
using namespace std;
int main()
{
    float x, y, r;
    cin >> x >> y >> r;
    char a[3];
    a[0] = x + '0';
    a[1] = y + '0';
    a[2] = r + '0';
    for (int i = 0; i < 3; ++i) {
        if (isdigit(a[i])) {
            continue;
        } else {
            goto exit;
        }
    }

    GCircle(x, y, r);
exit:
    return 0;
}

