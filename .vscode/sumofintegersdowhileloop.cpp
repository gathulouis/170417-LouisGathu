#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum=0;

    do
    {cout<<"Enter a number to Add: "; 
    cin>>number;
    sum+=number;
        
    } while (number!=0);
    cout<<sum;
    


    return 0;
}