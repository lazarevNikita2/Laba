#include <conio.h>
  using namespace std;
 int sum(int a,int b)
 {
    int c=a+b;
      return c;
 }
 int sub(int a,int b)
 {
    int s=a-b;
    return s;
 }
 int m(int a,int b)
 {
    int d;
    d=a;
    for(int i=1; i<b; i++);
        d+=a;
    return d;
 }
 int del(int a,int b)
 {
    int i=0;
    int g=a;
    while (a>b)
      {
        int g=a-b;
        g=a;
        i++;
       }
       return i;
 }
 void main()
 {
    int a,b;
    cin>>a;
    cin>>b;
    int c=sum(a,b);
    int s=sub(a,b);
    int d=m(a,b);
    int i=del(a,b);
    cout<<"summa="<<c;
    cout<<"\n";
    cout<<"raznost="<<c;
    cout<<"\n";
    cout<<"umnozhenie="<<c;
    cout<<"\n";
    cout<<"delenie="<<c;
    cout<<"\n";
    system("pause");
 }
