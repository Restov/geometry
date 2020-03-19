#include "func.h"
#include <bits/stdc++.h>
using namespace std;
float P = 3.141592653589793238466;
int main()
{
    int x,y,r;
    int x1,x2,y1,y2,x3,y3;
    int variant = prompt_menu_item(); 
	switch (variant)
	{
		case 1:
		{
			cin >> x >> y >> r;
    		GCircle(x,y,r);
			break;
		}
		case 2:
		{
			cin >> x1 >> x2 >> y1 >> y2;
			GTriangle(x1,x2,x3, y1, y2, y3);
			break;
		}
	}
	
}
