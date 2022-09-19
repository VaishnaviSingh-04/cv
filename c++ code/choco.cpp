#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    x *= 5;
	    y *= 10;
	    std::cout << (x+y) / z << std::endl;
	}
	return 0;
}