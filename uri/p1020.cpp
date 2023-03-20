#include <iostream>
using namespace std;

    int main()
    {
        int year = 0, month = 0, days = 0;
        scanf("%d", &days); 
        year = days / 365;
        days = days % 365;
        month = days / 30;
        days = days % 30;
        printf("%d ano(s)\n", year);
        printf("%d mes(es)\n", month);
        printf("%d dia(s)\n", days);
    return 0;
    }  
            