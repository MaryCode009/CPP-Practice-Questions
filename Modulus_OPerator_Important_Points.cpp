#include<iostream>
using namespace std;

int main(){
   int a=6,b=4, p=8,q=4;
   cout<<a%b<<endl; //Modulus operator: gives remainder unlike division which gives quotient
   cout<<p%q<<endl;

   //Important points
   int c=3, d=4; //(x%y)=x if x is less than y, output  will be value in x
   cout<<c%d<<endl; 

   int e=6, f=-4; //(x%-y) will not give negative remainder if denominator is negative, so output will be 2 not -2
   cout<<e%f<<endl; 

   int g=-8, h=6; //(-x%y) will give negative remainder as numerator is negative, so output will be -2
   cout<<g%h<<endl; 

   cout<<a%a; // output will always be zero here
    
return 0;
}
/* modulus is important for divisibility questions . e.g, If a%b=0 this means a is divisible by b  */
