#include <iostream>
using namespace std;

int main() {
    string n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += (n[i] - '0');
    }
    if(sum % 2 == 0)
        cout<<"Vignesh" <<endl;
    else
        cout<<"Charan"<<endl;
    return 0;
}
