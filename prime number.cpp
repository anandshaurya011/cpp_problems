//prime number

#include<iostream>
using namespace std;

bool isprime(int num1){
    for(int i = 2; i <= num1-1; i++){
        if(num1%i == 0){
            return false;
        }
    }
    return true;
}

bool x;
int num1;

int main(){

    cout<<"Enter a number, you want to check (isprime or not?)"<<endl;
    cin>>num1;
    x = isprime(num1);
    cout<< (x?"yes":"no") <<endl;
    return 0;
}