//Take character from user and print its ASCII value
#include<iostream>
using namespace std;

/*Char can store all upppercase and lowercase letters,special characters(@ # $ ^ & * , .  / ~ { ! etc), numbers as 
characters. it stores any character within  single quotes */
int main(){
   char alphabet='a', x='Z';
   char at_the_rate='@', hash='#', comma=',' ;
   char nine='9';
   cout<<alphabet<<endl<<x<<endl<<at_the_rate<<endl<<hash<<endl<<comma<<endl<<nine<<endl<<endl;
   
/*ASCII Value: Every character has its specific integer value called as ASCII value e,g lowercase(a=97, b=98.....z=122)
 and uppercase(A=65, B=66....Z=90), digits('0'=48, '1'=49....'9'=57)*/
   char ef='f',el='L';
   cout<<(int)ef<<endl<<(int)el<<endl<<endl; //102 output  and 76

//Program Question
    char ch;
    cout<<"enter the character\n" ;
    cin>>ch;
    cout<<"ASCII value of given character is : "<<(int)ch;//by typecasting we convert character to its ASCII value
    
return 0;
}