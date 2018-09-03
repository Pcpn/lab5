#include<iostream>
using namespace std;
int main()

   {
   //declare variables
    int i,sum,n;
   cout<<"enter n";
   cin>>n;
    sum=0;
    i=1;
      while(i<=n)
      {
      sum=sum+i;
      i=i+1;
      }
      cout<< "the sum is"<<sum<<endl;
return 0;
}