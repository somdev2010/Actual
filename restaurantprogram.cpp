#include<iostream>
using namespace std;
int main(){
    int price,digit, even_sum, odd_sum, discount, cpy_price;
    even_sum,odd_sum=0;
    cout<<"Enter bill amount:"<<endl;
    cin>>price;
    cpy_price=price;
    while(price>0){ 
       digit=price%10;
       if (digit%2==0)
       {
        //even
        //even sum=even_sum+digit
        even_sum+=digit;
       }else{
        odd_sum+=digit;
       }
        price=price/10;
    }
    discount=even_sum+odd_sum;
    cout<<"To pay:"<<cpy_price-discount;
    return 0;
}