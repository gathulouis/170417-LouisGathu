#include<iostream>
using namespace std;

int main()
{
    float a, b, sum, mult, difference, div;
    cout << "A  C++ calculator!\n";
    cout << "This programme adds, multiples, subtracts, and divides Two numbers.\n";
    cout << "______________________________________\n\n";
    cout << "Enter the first number:";
    //Captures first number
    cin >> a;
    cout << "Enter the second number:";
    //Captures second number 
    cin >> b;

    //maths Calculations
    sum = a + b;
    mult = a * b;
    difference = a - b;
    div = a/b;


    cout << "\n";
    cout << " Here You go..\n\n";
    cout << "Sum of "<<a<<" and "<<b<<" is:"<<sum<<"\n";
    cout << "Multiplication of " << a << " and " << b << " is:" << mult << "\n";
    cout << "Difference of " << a << " and " << b << " is:" << difference << "\n";
    cout << "Division of " << a << " and " << b << " is:" << div << "\n";
    cout << "\n";
    cout << "End of calculation.";
    cout << "\n";
    cout << "\n";

    return 0;
}
