#include<iostream>
using namespace std;
int row,col;

cin>>row>>col;

for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(j==1 || j==col){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    return 0;
}