#include<iostream>
#include<string>
using namespace std;

int main(){
    int teabags;

    cout<<"Enter the number of teabags you have : "<<endl;
    cin>>teabags;

    if(teabags<10){
        teabags+=5;
    }else{
        cout<<"No need to add more"<<endl;
    }
    cout<<"you now have "<<teabags<<"in your suitcase";
    

    return 0;
}