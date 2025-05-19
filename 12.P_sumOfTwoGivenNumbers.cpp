//Sum of two given numbers (take user input)
#include<iostream>
using namespace std;

int main(){
  int num1, num2, sum;
 cout<<"enter the first number : \n"; //  /n can also be used for next line and it should always be within double quotes
 cin>>num1;

 cout<<"enter the second number : \n";
 cin>>num2;

 sum=num1+num2;
 cout<<"sum of two given numbers "<<num1<<" + "<<num2<<" = "<<sum;

    
return 0;
}