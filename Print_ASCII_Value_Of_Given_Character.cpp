//Take character from user and print its ASCII value
#include<iostream>
using namespace std;

int main(){

   
/*ASCII Value: Every character has its specific integer value called as ASCII value e,g lowercase(a=97, b=98.....z=122)
 and uppercase(A=65, B=66....Z=90), digits as characters ('0'=48, '1'=49....'9'=57)*/
   char small_a='a', atTheRateOf='@', capitalA='A' ;
   cout<<(int)small_a<<endl<<(int)atTheRateOf<<endl<<(int)capitalA<<endl<<endl; //output will be 97(for a), 64(for @) and 65(for A)
   

//Program Question
    char ch;
    cout<<"enter the character\n" ;
    cin>>ch;
    cout<<"ASCII value of given character is : "<<(int)ch;//by typecasting here we convert character to its ASCII value
    
return 0;
}
