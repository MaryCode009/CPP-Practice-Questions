//Program to take a positive integer input and tell if it is even or odd
//If else deals with statements which have some conditions and the output depends on that condition or situation
#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"enter the number\n";
   cin>>num;
   
if(num%2==0){ //num%2==0 codition for even , == equality sign . if this condition is true it will execute otherwise else part
   cout<<"the number is even\n";
}
else {
    cout<<"the number is odd\n" ;
    cout<<"means not divisible by 2\n"; // this is part of else as it is inside { } of else
}
  cout<<"Done"; //this is part of whole code as it is outside of if and else part

   //if(num%2!=0)  //num%2!=0 is codition for odd  And != is not equal sign
   //cout<<"the number is odd\n";

   
   
return 0;
}