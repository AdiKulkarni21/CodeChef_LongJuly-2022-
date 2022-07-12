#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;

int a[3],b;

for(int i=1;i<=n;i++)
{    int max =0;   
      b=0;
    for(int j=0;j<=2;j++)
    {    cin>>a[j];

         
        if(a[j]> max)
        {
         max=a[j];
         b=j;
        }
    }
        
        switch(b) 
      {
       case 0:
         cout<<"Alice\n";
         break;
       case 1:
         cout<<"Bob\n";
         break;
       case 2:
         cout<<"Charlie\n";
         break; 
      }
    
}
	return 0;
}
