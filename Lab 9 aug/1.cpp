#include<iostream>
using namespace std;
class employee{
double ebp;
double egp;
char ename[100];
char edisg[100];
char egender[10];
char edepart[20];
public:
void data()
{
    cout<<"Enter employee's name=\t";
    cin>>ename;
    cout<<"Enter employee's designation=\t";
    cin>>edisg;
     cout<<"Enter employee's gender M/F=\t";
    cin>>egender;
       cout<<"Enter employee's department=\t";
    cin>>edepart;
    cout <<"Enter employee's basic pay=\t";
       cin>>ebp;
       egp=ebp+ebp/4+ebp*3/4;
       cout<<"The gross pay of employee is =\t"<<egp<<endl;
    cout<<"\n";
  };
};
int main()
{
employee e;
    e.data();
return 0;
}
