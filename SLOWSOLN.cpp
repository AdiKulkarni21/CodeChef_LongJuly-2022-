#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	for(int i=1;i<=tc;i++)
	{   int T=0,N=0,S=0;
	int count=1;
	    cin>>T>>N>>S;
	    int Sum=0;
	    int ex;
	    ex=S/N;
	    for(int j=0;(j<ex)&&(j<T);j++){
	    count++;
	    Sum+=N*N;
	    }
	    if(count<=T){
	    int m=S%N;
	    Sum+=m*m;
	    }
	    cout<<Sum<<endl;
	}
	return 0;
}
