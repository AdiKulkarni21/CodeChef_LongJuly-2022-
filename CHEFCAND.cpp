#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
	    int n,x;
	    cin>>n>>x;
	   float rem =0.0;
	    if(x>=n)
	     {
	         cout<<"0"<<endl;
	       
	         
	     }
	     else{
	         rem=n-x;
	         rem=rem/4;
	   
	         cout<<ceil(rem)<<endl;
	      }
	      
	}

	return 0;
}
