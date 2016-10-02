//T. Robert Ward
// May 28, 2013

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "***** Highway Patrol Ticket Calculator *****\n" << endl;

    string driver;
    int speed, fine;

    cout << "Enter the person's last name: ";
    cin >> driver;

    cout << "Enter the violating speed: ";
    cin >> speed;

    if(speed < 70)
    {
        fine = 50 + ((speed - 55) * 5);
    }
    else
    {
        fine = 125 + ((speed - 55) * 10);
    }
    if(speed < 56)
    {
        fine = 0;
        cout << "invalid speed !!!!";
    }

    cout << "\n\nMr./Mrs. " << driver << "'s fine is $" << fine << endl;

    return 0;
}
