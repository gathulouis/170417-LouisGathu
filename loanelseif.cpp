#include <iostream>
using namespace std;

int main()
{
    int age,balance;
    string crb,bperiod;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter your bank balance: ";
    cin>>balance;

    cout<<"What is your CRB status: ";
    getline(cin,crb);

    cout<<"How long have you been a customer: ";
    getline(cin,bperiod);


    return 0;
}