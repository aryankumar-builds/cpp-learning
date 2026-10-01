#include <iostream>
using namespace std;
int main()
{
    int num;
    int digit;
    int sum = 0;
    int original;

    cout << "Enter your number: ";
    cin >> num;
     original = num;

     for(; num != 0; num /= 10)
     {
        digit = num % 10;

        sum = sum + digit * digit * digit;
     }

     if(original == sum)
     {
        cout << original <<" Is Armstrong";
     }
     else
     {
        cout << original <<" Is not Armstrong";
     }

     return 0;
}