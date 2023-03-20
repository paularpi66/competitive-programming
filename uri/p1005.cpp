#include <iostream>
using namespace std;
 
int main() { 

    double a, b, sum = 0, media;
    float c = 3.5, d = 7.5;
    scanf("%lf %lf", &a, &b);
    sum = c + d;
    media = ((a * c) + (b * d)) / sum;
    printf("MEDIA = %.5f\n", media);

    return 0;
}
