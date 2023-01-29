#include<iostream>
using namespace std;
int main()
{
    int k,a=0,b[100],n;
    cout<<"enter the length of an array\t";
    cin>>n;
cout<<"enter the elements of an array"<<endl;
     for(int i=0;i<n;i++)
            cin>>b[i];
  cout<<"Enter the element to be searched\t"<<endl;
        cin>>k;
             for(int i=0;i<n;i++)
            {
                if(k==b[i]){
                    cout<<"The element is found at "<<i+1<<" position\n";
                a=1;
                }
            }
            if (a==0)
                cout<<"The element is not found in this array";
}
