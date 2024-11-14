#include <iostream>
using namespace std;

int main() {  
    int tc;
    cin>>tc;
    while(tc--){
        int n, m;
        cin>>n>>m;
        if(m >= n)  cout<<0<<endl;
        else  cout<<n-m<<endl;
    }
    return 0;
}
