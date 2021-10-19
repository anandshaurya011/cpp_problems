#include<iostream>
using namespace std;

int number = 100;
int n = 0;
int sum = 0;

int main(){

    while(n<=number){
        sum = sum + n;
        n++;
    }
    cout<<sum<<endl;
    return 0;
}