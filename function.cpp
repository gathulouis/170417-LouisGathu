#include<iostream>
#include<string>

using namespace std;

int globalVar=30;
const int age =25;

void myFunction()
{
    int localvar1=10, localVar1=12;
    string localString1="Local Strign 1", localString2="Local String 2";
    cout<<"Local Variable 1 =" <<localVar1 <<endl;
}

int main()
{
   glabalVar =50;
   age=70;

    return 0;

}