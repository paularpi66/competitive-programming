#include <iostream>
using namespace std;
 
int main() { 

    double a, b, c, sum = 0, media;
    float aw = 2, bw = 3, cw = 5;
    scanf("%lf %lf %lf", &a, &b, &c);
    sum = aw + bw + cw;
    media = ((a * aw) + (b * bw) + (c * cw)) / sum;
    printf("MEDIA = %.1f\n", media);

    return 0;
}
