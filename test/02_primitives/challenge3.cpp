//Question: write a program that takes the user's favourite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string favouriteTea ;
    int numberofcups;
    cout<<"what is your favourite tea"<<endl;

    getline(cin , favouriteTea);
    cout<<"how many cups of tea would you like to order";
    cin>>numberofcups;

    cout<<"You have ordered "<<numberofcups<<"cups of tea buut we will not give u any ";
}
