#include<iostream>
using namespace std;
int main()
{
    int k=0,j,b[100],n;
    cout<<"enter the length of an array\t";
    cin>>n;
cout<<"enter the elements of an array"<<endl;
     for(int i=0;i<n;i++)
            cin>>b[i];
                j=n-1;
        for(int i=0;i<j;i++){
                k=b[i];
                b[i]=b[j];
                b[j]=k;
                j--;
                  }
        for(int i=0;i<n;i++)
           cout<<b[i]<<"\t";
}
