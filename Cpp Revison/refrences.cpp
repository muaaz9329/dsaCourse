#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void outPut(string str)
{
    cout << str << endl;
}

int main()
{

    int a = 10;
    int &ref = a;

    outPut("Before Increment thru Refrence ");
    outPut("Value of a :" + to_string(a));
    outPut("Value of ref :" + to_string(ref));
    outPut("Now I am assigning the value 20 to ref ");
    ref = 20;
    outPut("Value of a after increment:" + to_string(a));
    outPut("Value of ref after increment:" + to_string(ref));
}