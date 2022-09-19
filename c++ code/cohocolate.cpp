#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        int sum=((X*5)+(Y*10))/Z;
        cout<<sum;
    }
  return 0;  
}        

