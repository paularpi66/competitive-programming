#include <iostream>
using namespace std;
 
int main() { 

    double salary, pvalue , total;
    char name;
    scanf("%s %lf %lf", &name, &salary, &pvalue);
    total = salary + pvalue * .15;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
