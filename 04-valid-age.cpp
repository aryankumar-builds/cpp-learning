#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your Age: ";
    cin >> age;

    if(age < 0 || age > 120)
    {
        cout << "Invalid Age";
    }
    else
    {
        cout <<" Valid Age";
    }
    return 0;
}