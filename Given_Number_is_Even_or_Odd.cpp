//Program to take a positive integer input and tell if it is even or odd
//If else deals with conditional statements and the output depends on that condition
#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"enter the number\n";
   cin>>num;
   
if(num%2==0){//num%2==0 is codition for even(a number divisible by 2 is even).If this condition is true it will print even 
   cout<<"the number is even\n";
}
else {      //if above condition is not satisfied, then  the number is odd. so else part will print odd
    cout<<"the number is odd\n" ; 
    cout<<"means not divisible by 2\n"; // this is part of else as it is inside { } of else
}
  cout<<"Done"; //this is part of whole code as it is outside of if and else part

   

   
   
return 0;
}
