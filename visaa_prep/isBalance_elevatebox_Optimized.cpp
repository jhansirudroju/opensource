#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], tSum = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        tSum += a[i];
    }
    int lsum = 0, res[n];
    for(int i = 0; i < n; i++){
         int rsum = tSum - lsum - a[i];
        res[i] = abs(lsum - rsum);
        lsum += a[i];
    }
    for(int i = 0; i < n; i++)
        cout<<res[i]<<" ";
    return 0;
}
