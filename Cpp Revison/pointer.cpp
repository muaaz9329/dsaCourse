#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    //* Pointer declaration  and working
    int a = 10;
    int *ptr;
    ptr = &a;

    cout<<"Value of a: " <<a<<endl;
    cout<<"Address of a in stack: " <<&a<<endl;
    cout<<"Pointer storing value: " <<ptr<<endl;
    cout<<"Derefrencing pointer ptr : "<<*ptr<<endl;

    //*Working in heap;

    int *newPtr = new int[2];
    newPtr[0] = 10;
    newPtr[1] = 20;

    for(int i=0;i<=1;i++){
        cout<<"memory in heap consisting of pointer value:"<<newPtr[i]<<endl;
    }


    //* freeing the memory , ie deleting the refrence to free up memory

    free(newPtr);
    free(ptr);

    return 0;
}