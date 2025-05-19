//1.find square of a number. Take user input.
/*in user input we can give new value without changing anything in code e.g, In calculator we keep calculating new values
 without changing anything in code (remember google example)*/

#include<iostream>
using namespace std;

int main(){
int a=5; //this is input not user input.
cout<<a<<endl;


int num;
cin>>num; // taking input from user (user input). User can keep changing his input in console as per his requirements
cout<<"square of the given number = "<< num*num<<endl<<endl;


//2.cube of a no.
int num2;
cout<<"enter a number to get its cube \n";
cin>>num2; //take user input
cout<<"cube of this number = "<<num2*num2*num2<<endl;


return 0;
}