#include<math.h>
#include<iostream>
using namespace std;


int counter(int x){
    int n = 0;
    while (x>0){
        int num = x%10;
        n = n+1;
        x = x /10;
    }
    // cout<< n;
    return n; 
}


int reverse(int n){
    int reverse= 0;
    // cout<<"entered"<< endl;
    
    while(n>0){
        // cout<<"entered in while"<< endl;
        int num = n % 10;
        reverse = reverse*10 + num;
        n = n/10;
    }
    cout<< "num = "<< reverse<< endl;
    return reverse;
}


int changer(int num, int expo){
    // cout<<"entered"<<endl;
    int get = 0;
    int sum = 0;
    expo = expo - 1;
    while (num>0){
        // cout<<sum<<endl;
        get = num%10;
        get = get*2;
        // cout<<get<<endl;
        sum = sum + pow(get, expo);
        num = num/10;
        expo  = expo - 1;
        
    }
    return sum;
    
}


int main(){

    int num;
    cout<<"Enter a binary number:- ";
    cin>>num;
    // cout<<changer(num, 5);
    cout<<"The number will be:- "<< changer(reverse(num), counter(num));

    // cout<< reverse(10011)<<endl;

    return 0;
}