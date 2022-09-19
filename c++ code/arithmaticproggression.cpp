#include<iostream>
using namespace std;
int term(int n){
    int sum=0;
    sum= (3*n+7);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term is">>term(n)>>endl;
     return 0;


}