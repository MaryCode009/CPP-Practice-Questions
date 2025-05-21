//Program to take a positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the number \n";
   cin>>n;
   
if(n%5==0){
      cout<<"the given number is divisible by 5\n";
   }
else{
      cout<<"the given number is not divisible by 5\n";
}
   
return 0;
}
