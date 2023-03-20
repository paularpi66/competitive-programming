#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
        int time , speed, distance = 0;
        scanf("%d %d", &time, &speed);
        distance = (time * speed);
        printf("%.3f\n", (distance / 12.0));
    return 0;
    }  
            