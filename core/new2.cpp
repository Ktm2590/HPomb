// Pointer's

#include<iostream>

using namespace std;

int main(){
    int a =3;
    int* b = &a;
    cout<<b<<endl;

    // & --->( address of ) operator
    cout<<&a<<endl;
    // * ---> (value at) dereference operator
    cout<<*b;
    // Pointer to Pointer

    int**c = &b;
    cout<<"new"<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}