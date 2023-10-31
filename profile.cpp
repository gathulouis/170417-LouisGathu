#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname,lastname,fullname,favouritemeal,movie;
    cout<<"Enter your First Name: ";
    getline(cin,firstname);
    cout<<"my first name is :"<<firstname<<endl;
    

   
    cout<<"Enter your Last Name: ";
    getline(cin,lastname);
    cout<<"my last name is: " <<lastname<<endl;
    
    
    cout<<"Enter your Full Name: ";
    getline(cin,fullname);
    cout<<"My full name is : "<<fullname<<endl;


    
    cout<<"Enter your Favourite Meal : ";
    getline(cin,favouritemeal);
    cout<<"my favourite meal is"<<favouritemeal<<endl;
    
   
    cout<<"Enter your Favourite Movie : ";
    getline(cin,movie);
    cout<<"my favourite movie is "<<movie<<endl;

    return 0;
}