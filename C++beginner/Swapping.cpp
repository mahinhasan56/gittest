
#include <iostream>
using namespace std;
int main()
{
    int x=10,y=20,sum;

    int *ptr1,*ptr2;
    ptr1 = &x;
    ptr2 = &y;

    //swapping using temporary variable
    int temp=*ptr1;
    *ptr1 =*ptr2;
    *ptr2 =temp;
    cout<< " x= " <<x;
    cout<< " y= " <<y;
    return 0;
}

