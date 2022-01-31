#include<iostream>
using namespace std;
int m,n,b=0;
int a[150];
int z[100];
bool translate(int q,int w)
{
    for(int i=0;i<q;i++)
    {
        if(z[i]==w)return true;
    }
    for(int k=0;k<q-1;k++)z[k]=z[k+1];
    z[q-1]=w;
    return false;
}
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(!translate(m,a[i]))s++;
    }
    cout<<b;
    return 0;
}
