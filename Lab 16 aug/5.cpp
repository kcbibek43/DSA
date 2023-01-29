#include<iostream>
using namespace std;
int main()
{
    int k=0,l,j,a[100],b[100],n,m,c[100];
    cout<<"enter the length of 1st array\t";
    cin>>n;
cout<<"enter the elements of 1st array"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the length of 2nd array\t";
cin>>m;
cout<<"enter the elements of 2nd array"<<endl;
for(int i=0;i<m;i++)
cin>>b[i];
j=n+m;
l=0;
for (k=0;k<j;k++)
{
    if(k<n)
        c[k]=a[k];
    else
    {
        c[k]=b[l];
        l++;
    }
}
cout<<"Elements of 3rd array after merging third array\n";
for (k=0;k<j;k++)
    cout<<c[k]<<"\n";
return 0;
}
