#include<iostream>
using namespace std;
int SearchX(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(a[i]==x) 
     {a[i+1]=a[i]; 
    return a[i];}
    else
    return -1;
     }
}
int main()
{
    int a[1000],n,x,i;
   while(cin>>n)
{
for(i=0;i<n;i++)
cin>>a[i];
cin>>x;
SearchX(a,n,x);
if(SearchX(a,n,x)!=-1)
cout<<SearchX(a,n,x)<<endl;
else cout<<"Not Found"<<endl;}
return 0;
}

