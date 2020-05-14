#include <iostream>
using namespace std;

int main(){

float  num1 , num2;
cout <<"Enter 2 numbers";
cin>>num1>>num2;

float sum =num1+num2;
cout << "Sum is +" <<sum;
cout<<endl;

float  sub =num1-num2;
cout <<"subtraction is :" <<sub;
cout<<endl;

float  mul =num1*num2;
cout <<"multiplication is :" <<mul;
cout<<endl;


//int rem =num1 % num2;
//cout <<"Remainder is : " << rem;
//cout<<endl;

double div=(float) num1 / num2;
cout <<"Division is:" << div;
cout<<endl;


return 0;
}
