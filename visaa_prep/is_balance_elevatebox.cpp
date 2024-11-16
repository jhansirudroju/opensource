#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int res[n];
    
    for(int i = 0; i < n; i++){
        int lsum = 0, rsum = 0;
        for(int p = 0; p < i; p++)
            lsum += a[p];
        for(int q = i+1; q < n; q++)
            rsum += a[q];
        res[i] = abs(lsum - rsum);
    }
    for(int i = 0; i < n; i++)
        cout<<res[i]<<" ";
    return 0;
}
