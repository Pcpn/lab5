#include<iostream>
using namespace std;
int main(){
//declare variable
int n;
//enter a number
cout <<"enter a number";
cin>>n;
//condition
if (n%5==0 && n%11==0)
    {cout << "the number is divisible by 5 and 11 is " << n;
     }
else
   {cout << "the number is not divisible by 5 and 11 is " << n;
    }
return 0;
}
