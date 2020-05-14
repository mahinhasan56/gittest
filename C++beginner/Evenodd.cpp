#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter an integer";
    cin>>num;
    if(num %2==0)
    {
        cout<< "even =" <<num;
    }
    else if(num%2!=0)
    {
        cout<< "ODD"<<num;
    }
    return 0;
}
