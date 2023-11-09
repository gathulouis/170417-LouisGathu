#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string message = (age >= 4) ? "Admitted" : "Declined Minimum age not reached";

    cout << "Admission status: " << message << endl;

    return 0;
}
