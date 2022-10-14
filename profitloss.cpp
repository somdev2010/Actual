#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    profit,loss,cp,sp=0;
    cout<<"Enter the cost price"<<endl;
    cin>>cp;
    cout<<"Enter the selling price"<<endl;
    cin>>sp;
    if (cp<sp)
    {
        profit=sp-cp;
        cout<<"Profit="<<profit<<endl;
    }
    else if(cp>sp){
        int loss=cp-sp;
        cout<<"Loss="<<loss<<endl;
    }
    return 0;
}