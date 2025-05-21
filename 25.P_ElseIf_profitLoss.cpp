/*Program: if cost price and selling price of an item is input through a keyboard,write a program to determine whether the
 seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred*/
//else if is used when we have many situations
#include<iostream>
using namespace std;

int main(){
 float cp, sp;
 cout<<"enter cost price\n";
 cin>>cp;
 cout<<"enter selling price\n";
 cin>>sp;   

 if(sp>cp){
    cout<<"seller has made profit of Rs "<<sp-cp;
 }

 else if(cp>sp){        
    cout<<"the seller has incurred loss of Rs "<<cp-sp;
 }

 else{
    cout<<"seller neither made profit nor incurred loss\n" ;
 }
    
return 0;
}