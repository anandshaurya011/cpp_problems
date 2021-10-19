#define NOMINMAX
#include <windows.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int arr[n];
    cout << "Enter how many array variable do you want:- ";
    cin>>n;
    cout <<endl;
    for(int i = 0; i<=(n-1); i++){
        cout<< "Enter " <<i+1<< " position of array:- ";
        cin>>arr[i];
        cout<<endl;
    }


    for(int i = 0; i<=(n-1); i++){
        cout<<i+1<<"th element of array is:- "<< arr[i];
        cout<<endl;
    }

    return 0;
}