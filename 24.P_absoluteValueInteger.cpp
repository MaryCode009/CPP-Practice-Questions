// Program to take an integer and print the absolute value of that integer
/* absolute value is same as modulus of maths i.e if number is positive it will remain as it is, but in case of negative
we need to make it positive. we will do it here by adding another negative sign with it */ 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    
 if(n>=0){
       cout<<"absolute value is : "<<n;
    }
 else{  //n<0 i.e negative number
       cout<<"absolute value is : "<<-n;
 }

 //OR full code in short
 //if(n<0) n=-n; cout<<n;
    
return 0;
}
