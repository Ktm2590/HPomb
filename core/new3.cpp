#include<iostream>

using namespace std;

int main(){
    int marks[] = {78,78,90,89,67};
    // cout<<marks[1];
    cout<<"New"<<endl;
    for(int i = 0; i < 4; i++){
        cout<<marks[i]<<endl;
    }
    cout<<"New"<<endl;
    int i = 0 , b=0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }
    cout<<"New"<<endl;
    do {
        cout<<marks[b]<<endl;
        b++;        
    }while(b<4);
    return 0;
}