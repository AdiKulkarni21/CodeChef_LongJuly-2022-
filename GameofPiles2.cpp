#include<iostream>
using namespace std;
int main() {
// your code goes here
int t;
cin>>t;
for(int j=0;j<t;j++)
{
int n; cin>>n;
int A[n];
int u=0, v=0,w=0, x=0, y=0;
for(int i=0; i<n; i++)
{
cin>>A[i];
if(A[i]==1)
{
    w++;
}
else
{
 if(A[i]==2)
 { 
    v++;
 }

x+=A[i];
y++;
if(A[i]%2)
{u++;
}
}}
if(w==1){
    if(!( u % 2)){
        cout<<"CHEF"<<endl;
        continue;
    }
  if(v==0){
    cout<<"CHEFINA"<<endl;
    continue;
  }  
  x-=2;
  y--;
  if((x-y)%2){
    cout<<"CHEFINA"<<endl;
    continue;
  }
  else{
    cout<<"CHEF"<<endl;
    continue;
  }
}
else if(w>1)
{
    if((x-y)%2){
        cout<<"CHEF"<<endl;
        continue;
    }
    else{
        cout<<"CHEFINA"<<endl;
        continue;
    }
}
if(u%2){
    cout<<"CHEF"<<endl;
    continue; 
}
else{
    cout<<"CHEFINA"<<endl;
    continue;
}
}
return 0;
}