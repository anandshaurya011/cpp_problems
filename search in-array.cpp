#include<iostream>
using namespace std;


int SearchInArray(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i+1;

        }
    }
    return -1;
}

int main(){
    cout<<"Enter the size of array"<<endl;
    int key;
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cout<<"Enter the "<<i+1<<" Element:- ";
        cin>>arr[i];
    }
    
    
    cout<<"Enter the element you wanna find in this array:- ";
    cin>>key;
    cout<<endl;

    
    cout<<"the position of "<<key<< " is:-  "<<SearchInArray(arr,n , key);

    return 0;
}