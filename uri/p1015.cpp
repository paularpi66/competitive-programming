#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
        double x1, x2, y1, y2, distance = 0;
        scanf("%lf %lf", &x1, &y1);
        scanf("%lf %lf", &x2, &y2);
        distance = sqrt ((x1 - x2) * (x1 - x2) + (y1 -y2) * (y1 - y2));
        printf("%.4lf\n", distance);
    return 0;
    }  
            