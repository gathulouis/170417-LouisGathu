#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    for(int num=20; num<=25; num+=1) //contains the initialiser,condition and iterator
    {

sum+=num; //adds the number by 1
    }
    cout<<"The sum is : "<<endl;
cout<<sum;

    return 0;
}