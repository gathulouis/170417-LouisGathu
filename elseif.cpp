#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 7)
    {
        cout << "Admit to grade school";
    }
    else if (age >= 5 && age <= 6)
    {
        cout << "Admit to kindergarten";
    }
    else if (age >= 3 && age <= 4)
    {
        cout << "Admit to Pre-school";
    }
    else if (age >= 1 && age <= 2)
    {
        cout << "Admit to Play group";
    }
    else
    {
        cout << "Rejected";
    }

    return 0;
}

