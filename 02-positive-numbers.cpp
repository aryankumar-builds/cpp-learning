#include <iostream>
using namespace std;
int main()
{
    int num1, num2 ;
    cout <<"Enter your number: ";
    cin >> num1;
    cout <<"Enter your number: ";
    cin >> num2;
    if(num1 > 0 && num2 > 0)
    {
        cout <<"Both are positive";
    }
    else
    {
        cout <<"At least one is not positive";
    }
    
    return 0;
    
}