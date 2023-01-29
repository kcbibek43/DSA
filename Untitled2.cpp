#include<iostream>
using namespace std;
struct book {
    char b_name[30];
    char book_isbn[10];
    char book_pub[30];
    char book_auth[30];
 void getBookInfo()
 {
 cout<<"Enter Book Name : ";
 cin>>b_name;
 cout<<"Enter Book isbn : ";
 cin>>book_isbn;
 cout<<"Enter Book Publisher : ";
 cin>>book_pub;
 cout<<"Enter Book Author Name : ";
 cin>>book_auth;
 }
 };
int main()
{
    struct book b;
    b.getBookInfo();
    return 0;
}
