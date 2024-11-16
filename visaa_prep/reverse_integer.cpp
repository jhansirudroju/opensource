#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int reverseNum(int n){
    int revNum = 0;
    while(n != 0){
        int digit = n % 10;
        n = n / 10;

        if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7)) {
            return 0; 
        }
        if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8)) {
            return 0;  
        }

        revNum = revNum * 10 + digit;
    }
    return revNum;
}

int main() {
   int n;
    cin>>n;
    cout<<reverseNum(n)<<endl;
   
    return 0;
}
