#include<iostream>
using namespace std;

int main()
{
    double myNum=15.5;
    int myNewNum=int(myNum);
    cout<<myNewNum;

    char myChar;
    int myInt=45;
    float myFloat=4.567;
    int mynum;
    myChar=static_cast<char>(myInt);
    myNum=static_cast<int>(myFloat);



    return 0;
};