#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <nmmintrin.h>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
#include <cmath>
#include <climits>
#include <bitset>
#include <random>
#include <ctime>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <sstream>
using namespace std;
float P = 3.141592653589793238466;
void GCircle(float x, float y, float r)
{
    float per = 2*P*r;
    float area = P*pow(r,2);
    cout << "Circle(" << x <<"," << y << "," << r << ")" << endl <<
    "Perimetr = " << per << endl << "Area = " << area;
}
int main()
{
    int x,y,r;
    cin >> x >> y >> r;
    GCircle(x,y,r);
}
