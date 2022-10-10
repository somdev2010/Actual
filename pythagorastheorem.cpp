// #include<iostream>
// #include<math.h>
// using namespace std;
// int main (){
//     int a,b,c,d,e;
//     cout<<"Give a number"<<endl;
//     cin>>a;
//     cout<<"Give another number"<<endl;
//     cin>>b;
//     d=pow(a,2);
//     e=pow(b,2);
//     c=sqrt(d+e);
//     cout<<"The solution(hypotenuse): "<<c<<endl;
//     return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int a,b;
    cout<<"Give a number"<<endl;
    cin>>a;
    cout<<"Give another number"<<endl;
    cin>>b;
    cout<<"The solution(hypotenuse): "<<sqrt(pow(a,2)+pow(b,2))<<endl;
    return 0;
}