#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int a[3];
bool flag=1;
for(int i=1;i<=n;i++)
{int sum =0;
flag=1;
    for(int j=0;j<=2;j++){
     cin>>a[j];
     sum+=a[j];
     if(a[j]<10)
      flag=0;
         }
    if(sum<100)
    {  
        flag=0;
    }
    if(flag==0)
     cout<<"FAIL\n";
    else
     cout<<"PASS\n";
}

	return 0;
}