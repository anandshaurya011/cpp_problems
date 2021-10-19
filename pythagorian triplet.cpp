/* Pythagorian triplet*/

#include<iostream>
using namespace std;

int first_number;
int second_number;

int theorem(int num1, int num2){
    num1 = num1 * num1;
    num2 = num2 * num2;
    int num3 = num2+num1;

    return num3;


}

int main(){
    cout<<"This is a pythogorous theorem calculator. \n Find 3rd side of a triangle"<<endl;
    cout<<"enter first number:- ";
    cin>>first_number;
    cout<<endl;
    cout<<"Enter 2nd number:- ";
    cin>>second_number;

    cout<<"Ther 3rd side will be:- "<<theorem(first_number, second_number);

    
    
    return 0;
}