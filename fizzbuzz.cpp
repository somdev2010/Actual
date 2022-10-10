#include<iostream>
using namespace std;
int main(){
    //FizzBuzz program
    int b,x;
    cout<<"Give a number";
    cin>>b;
    if(b%3==0 && b%5==0){
        cout<<"Fizz-Buzz";
    }else if(b%5==0){
        cout<<"Buzz";
    }else if(b%3==0){
        cout<<"Fizz";
    }
return 0;
}