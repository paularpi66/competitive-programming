#include <iostream>
using namespace std;


int f(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        n /= 10;
        sum += rem;
    }
    return sum;
}

int g(int n){
    while( n > 9){
        n = f(n);
    }
    return n;
}

int main(){

    while(true){
        int n, result;
        cin >> n;
        if (n == 0){
            break;
        }
        result = g(n);
        cout << result << endl;
    }
    return 0;
}
