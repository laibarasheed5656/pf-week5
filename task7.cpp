#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    float distance,angle,height,radian;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degree): ";
    cin>>angle;
    radian=angle/57.2958;
    height=tan(radian)*distance;
    cout<<"The height of tree is: "<<height<<"feet";
    


}