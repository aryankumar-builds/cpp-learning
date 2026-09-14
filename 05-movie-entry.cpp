#include <iostream>
using namespace std;
int main()
{
    int age;
    bool hasTicket;
    hasTicket = true;

    cout << "Enter your age: ";
    cin >> age ;

    if( age >= 18)
    {
        if(hasTicket)
        {
            cout << "You can enter";
        }
        else
        {
            cout << "Buy a ticket";
        }
    
    }
    else
    {
        cout <<" Not allowed";
    }
    return 0;

}