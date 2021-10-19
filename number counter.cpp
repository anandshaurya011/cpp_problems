// Changing binary to deciamal pnumber

#define NOMINMAX
#include <windows.h>
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
int main(){
    cout<< counter(101101);
    return 0;
}