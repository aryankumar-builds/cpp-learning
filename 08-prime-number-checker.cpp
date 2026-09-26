#include <iostream>
using namespace std;
int main()
{
    int num;
    int count =0;

    cout <<"Enter your number: ";
    cin >> num;

    for(int i =2; i< num; i++)
    {
        if( num % i ==0)
        {
            count++;
        }
    }
    if(count ==0)
    {
        cout << num<< "is a prime number.";
    }
    else
    {
        cout << num<< "is not a prime number.";
    }
    
    return 0;
}