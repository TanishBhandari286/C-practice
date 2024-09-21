#include<iostream>
#include<string>
using namespace std;
int main(){
    int cupsBought;
    cout<<"How many cups u have bought from us";
    cin>>cupsBought;
    if(cupsBought>20){
        cout<<"congratulations you are our most loyal customer and u have a gold badge "<<endl;

    }
    else if(cupsBought>10 && cupsBought<=20){
        cout<<"Congratulations you are a silver badge holder and we would like to see you in our gold list"<<endl;
    }
    else{
        cout<<"You are not a regular customer"<<endl;
    }

    return 0;
}