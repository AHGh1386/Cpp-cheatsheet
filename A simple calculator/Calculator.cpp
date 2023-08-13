#include <iostream>
#include <cstring>
#include <cstdio>
#include <math.h>

using namespace std;

int Fact(int a);

int Power (int ,int);

int main()
{
   float a,b;
   char n,op;
   //n= nothing;
   n=='n';
   cout<<"______________________________"<<endl;
   cout<<"Enter the first number  : ";
   cin>>a;
   cout<<"Enter the operator      : ";
   cin>>op;
   cout<<"Enter the second number : ";
   cin>>b;

   switch(op)
   {
       case '*':cout<<a*b;
       break;
       case '/':
           if(b!=0)
           {
               cout<<a/b;
           }
           else
           {
               cout<<"ERROR";
           }
       break;
       case '+':cout<<a+b;
       break;
       case '-':cout<<a-b;
       break;
       case '^':cout<<Power(a,b);
       break;
       if(op='!')
       {
        if(b==n)
       {
       case '!':cout<<Fact(a);
       break;
       }
       }
       if (op=='l')
       {
        if(b==n)
           {
       case 'l':cout<<log(a);
       break;
           }
       }
       if (op=='f')
       {
           if(b==n)
           {
       case 'f':cout<<fabs(a);
           }
       }
   }
 cout<<endl<<"______________________________";
    return 0;
}

int Fact (int a)
{
    int j,i,f=1;

    for(i=1 ; i<=a ; i++)
    {
       f=f*i;
    }
    return f;
}


int Power (int a,int b)
{
    int i,pow=1;

    for(i=1 ; i<=b ; i++)
    {
        pow*=a;
    }
    return pow;
}
