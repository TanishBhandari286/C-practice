// Question 2: Modify Tea prices create a program where the user inputs a base price for tea. use type casting to increase the price by 10% and display the rounded new price using explicit casting//
#include<iostream>
#include<string>
using namespace std;
int main(){
    int Teaprice;
    cin>>Teaprice;
    double add = Teaprice/10;
    double NewTeaPrice = Teaprice+add;
    cout<<"The Old Tea Price was\t"<<Teaprice<<endl;
    cout<<"The New Tea Price is\t"<<NewTeaPrice<<endl; 

}

