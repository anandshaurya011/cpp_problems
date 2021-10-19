#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int reverse= 0;
    cout<<"entered"<< endl;
    
    while(n>0){
        // cout<<"entered in while"<< endl;
        int num = n % 10;
        cout<< "num = "<< num<< endl;

        reverse = reverse*10 + num;
        n = n/10;
    }
    cout<< reverse<< endl;
    // cout<<endl;
    return 0;
}