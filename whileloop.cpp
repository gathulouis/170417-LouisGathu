#include<iostream>

using namespace std;

int main()
{  
    string food;
    char resp;

    cout<<"Enter a food you like :";
    cin>>food;
    cout<<"Do you wish to continue? (Y/N)";
    cin>>resp;

    while(resp=='Y')
    {
        cout<<"Enter a food you like :";
        cin>>food;
        cout<<"Do you wish to continue? (Y/N)";
    cin>>resp;
    }




    return 0;
}