
#include<iostream>
using namespace std;
bool symmetryCheck(int number);
main(){
    int number;
    bool result;
    cout <<"Enter a three-digit number: ";
    cin >>number;
    result=symmetryCheck(number);
    if (result==1){
        cout<<"The number is symmetrical.";
    }
    if (result==0){
        cout<<"The number is not symmetrical.";
    }
}

bool symmetryCheck(int number)
{
    int num1, num2, num3, a;
    num1=number/100;
    a=number%100;
    num2=a/10;
    num3=number%10;
}