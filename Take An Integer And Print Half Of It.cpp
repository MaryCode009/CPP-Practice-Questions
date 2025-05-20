// Program to take integer x input and print half of the number
/*half of a number can b decimal number also but due to its int datatype it will round off in case of decimal number so we
need to typecast it (into float or double). typecast is coverting the type of a variable from one to another */
#include<iostream>
using namespace std;

int main(){

    int a=4, b=5;
   cout<<a/2<<endl<<b/2<<endl; // output of b/2 will be 2 which is not exact half

   // Program Question
   int x;
   cout<<"enter the number\n";
   cin>>x;
   float y=(float)x;//typecasting
   cout<<y/2<<endl;

   //shorcut
   int p=7;
   cout<<(float)p/2;  //output3.5
    

return 0;
}
