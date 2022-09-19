#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;1++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}