#include <iostream>
using namespace std;
int main()
{
    int num;
    int reverse = 0;
    int digit;
    int original;

    cout << "Enter your number: ";
    cin >> num;

    original = num;

    for(; num != 0; num /= 10)
    {
        digit = num % 10;

        reverse = reverse * 10 + digit;
    }
    if(original == reverse)
    {
        cout << original <<" Is palindrome";
    }
    else
    {
        cout << original <<" Is not palindrome";
    }

    return 0;
}