#include <iostream>
using namespace std;
int main()
{ 
    int num;
    int reverse = 0;
    int digit;

    cout << "Enter your number: ";
    cin >> num;

    for(; num!= 0; num /=10)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }

    cout << reverse << endl;

    return 0;
}