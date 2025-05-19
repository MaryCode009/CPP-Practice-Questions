//Calculate Simple Interest (SI=(p*r*t)/100)
#include<iostream>
using namespace std;

int main(){
 float p=1000;// Principle:main amount
 float r=30; // Rate: e.g, commission  (30%)
 float t=3; // Time:period of time to invest (3 years) 
 float si=(p*r*t)/100; //simple interest.       we should use braces in formulla(p*r*t) to avoid conflicts
cout<<si;
    
return 0;
}
