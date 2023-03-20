#include <iostream>
using namespace std;

    int main()
    {
        int hour = 0, minute = 0, second = 0;
        scanf("%d", &second); 
        hour = second / 3600;
        second = second % 3600;
        minute = second / 60;
        second = second % 60;
        printf("%d:%d:%d\n",hour, minute, second);
    return 0;
    }  
            