#include <iostream>
using namespace std;
 
    int main() { 

    double r, pi, volume = 0;
    pi = 3.14159;
    scanf("%lf", &r);
    volume = (4.0 / 3.0) * pi * r * r * r;
    
    printf("VOLUME = %.3f\n", volume);

    return 0;
}
