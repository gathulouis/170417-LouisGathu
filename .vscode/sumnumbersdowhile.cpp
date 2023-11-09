#include <iostream>
using namespace std;

int main()
{
    cout<<"Sum of numbers between 20 and 25"<<endl;
   int value=20, sum=0;

    do
    {
        sum=sum+value;
        value++;
    } while (value<=25);
    
cout<<sum;

    return 0;
}