#include<iostream>
using namespace std;
int main (){
    int b;
    for(int b=0;b<51;b++)
    {
        cout<<"b="<<b;
        if(b%3==0 && b%5==0){
        cout<<"-Fizz-Buzz"<<endl;
    }else if(b%5==0){
        cout<<"-Buzz"<<endl;
    }else if(b%3==0){
        cout<<"-Fizz"<<endl;
    }
    else{
        cout<<endl;
    }
    }
    cout<<b;
    return 0;
}