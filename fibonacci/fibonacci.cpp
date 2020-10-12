//Fibonacci Series using Recursion
#include<iostream>
using namespace std;
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}


//Fibonacci series using loop
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"No of elements in series"<<endl;
   cin>>n;
   int a=0;
   int b=1;
   int i=0;
   while(i<n){
       
       if(i==n)
       break;
       cout<<a<<"  ";
       i++;
       if(i==n)
       break;
       cout<<b<<"  ";
       i++;
       a=a+b;
       b=b+a;
   
   }
}
