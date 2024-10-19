#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	int t;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y)
	    cout<<"Car"<<endl;
	    else if(y==x)
	    cout<<"Same"<<endl;
	    else
	    cout<<"Bike"<<endl;
	}
return 0;
}
