#include<iostream>
using namespace std;
int main(){
//declare variable
float a1, a2, a3;
//enter three number
cout << "enter three number";
cin>>a1>>a2>>a3;
//comparison
if (a1>a2 && a1>a3)
        { cout << "the maximum number is" << a1;
         }
else if (a2>a1 && a2>a3)
         { cout << "the maximum number is" << a2;
         }
else 
         { cout << "the maximum number is" << a3;
          } 
return 0;
}
