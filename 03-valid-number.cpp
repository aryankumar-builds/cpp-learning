#include <iostream>
using namespace std;
int main()
{
    int num;

    cout <<"Enter your number: ";
    cin >> num;

    if( num <0 || num > 100)
    {
        cout <<"Invalid number";
    }
    else
    {
    
         cout <<"Valid number";
    }


    return 0;

}