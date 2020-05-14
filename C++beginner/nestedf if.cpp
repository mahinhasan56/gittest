#include <iostream>
using namespace std;
int main ()
{

    int mark;
    cout<<  "Enter Your marks Here    ";
    cin>>mark;
    if (mark>32)
    {

        if(mark>=80)
        {
            cout<<"A+";

        }
        else if (mark>=70)
        {
            cout<<"A";
        }
        else if (mark>=60)
        {
            cout<<"A-";
        }
        else if (mark>=50)
        {
            cout<<"B";
        }
        else if (mark>=40)
        {
            cout<<"C";
        }

        return 0;
    }
    else
    {
        cout<<"Fail" << endl;
    }
}
