// Funcation 

#include<iostream>

using namespace std;

int sum(int , int);

void add(){
    cout<<"Hello World!"<<endl;
}

int main(){
    add();
    cout<<sum(890,90);
    return 0;
}

int sum(int a ,int b){
    a= a , b=b;
    int c = a+b;
    return c;
}