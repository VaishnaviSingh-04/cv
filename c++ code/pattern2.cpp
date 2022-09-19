#include<iostream>
using namespace std;
int main()
{
    int rows, coloumn;
    cout<<"enter number of rows:\n";
    cin>>rows;
    cout<<"enter number of coloumns:\n";
    cin>>coloumn;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=coloumn; j++)
        {
            if(i=1 i==rows || j=1 || j==coloumn)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        
        cout<<endl;
    }

    return 0;
}