
#include<iostream>
using namespace std;

// Print char from ‘Z’ to ‘A’ with the help of a for loop.

int main(){

    for(char ch = 'Z'; ch >= 'A'; ch--){
        cout<<char(ch)<<" ";
    }
    return true;
}