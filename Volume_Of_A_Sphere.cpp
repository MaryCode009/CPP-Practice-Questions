//find volume of sphere (v=(4*pi*r^3)/3.
/*A sphere is a flat shape.  it is 2 dimentional (2D) like a ring drawn on paper having only length and breadth while
sphere has 3 dimentions 3D like a basketball having lenth, breadth and height*/

#include<iostream>
using namespace std;

int main(){
   // sphere1
   float r=2.5; //radius
   float pi=3.1415;
   float volume=(4*pi*r*r*r)/3;
   cout<<"volume of Sphere1 = "<<volume<<endl<<endl;

   //another sphere taking input from user
   float radius2, volumeOfSphere2;
   cout<<"enter the radius of this sphere2 :";
   cin>>radius2;
   volumeOfSphere2= (4*pi*radius2*radius2*radius2)/3; //pi already defined above in code
   cout<<"volume of this sphere2 = "<<volumeOfSphere2;


return 0;
}
