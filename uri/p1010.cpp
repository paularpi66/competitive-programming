#include <iostream>
using namespace std;
 
int main() { 

    int pcode1, pcode2, punit1, punit2;
    float pprice1, pprice2, Total_expense = 0;
    scanf("%d %d %f", &pcode1, &punit1, &pprice1);
    scanf("%d %d %f", &pcode2, &punit2, &pprice2);
    Total_expense = ((pprice1 *punit1) + (pprice2 * punit2));
 
    printf("VALOR A PAGAR: R$ %.2f\n", Total_expense);

    return 0;
}
