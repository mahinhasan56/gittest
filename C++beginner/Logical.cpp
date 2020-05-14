#include <iostream>

using namespace std;
int main()
{
    int num1,num2,num3,max;
    cout<< "Enter Numbers";
    cin>> num1>>num2 >> num3;

    if(num1 > num2 && num1>num3)
    {
        max =num1;
    }
    else if (num2>num1 && num2 > num3)
    {
        max =num3;
    }
    cout << "Large Number : "<< max;

    return 0;
}
