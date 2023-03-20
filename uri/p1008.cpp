#include <iostream>
using namespace std;
 
int main() { 

    int em, wh;
    float salary = 0, aph;
    scanf("%d %d %f", &em, &wh, &aph);
    salary = wh * aph;
    printf("NUMBER = %d\nSALARY = U$ %.2f", em, salary);

    return 0;
}
