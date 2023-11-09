#include<iostream>
using namespace std;

int main()
{
    int age;
    string interest;

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your interest: ";
    cin>>interest;
    if (age>=4 && age<=10)
    {
       if(interest=="soccer"){
        cout<<"assigned to soccer play group";
       }
       if(interest=="art"){
        cout<<"assigned to art play group";
       }
       else{
        cout<<"assigned to other groups:";
       }

    }
    return 0;
}