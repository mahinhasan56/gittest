#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter any integer : ";
    cin>>num;

    (num%2==0) ? cout<<num <<" is even " : cout <<num <<" is odd";
    return 0;
}
