#include<iostream>
using namespace std;
int main()
{
    int input;
    float a,b;
    cout<<"Given input"<<endl;
    cout<<"Press 1 for subtraction"<<endl;
    cout<<"Press 2 for addition"<<endl;
    cout<<"Press 3 for multiplication"<<endl;
    cout<<"Press 4 for division"<<endl;
    cout<<"Give input"<<endl;
    cin>>input;
    cout<<"Given two numbers"<<endl;
    cin>>a>>b;
    switch (input)
    {
    case 1:
        cout<<abs(a-b)<<endl;
        break;
    case 2:
        cout<<a+b<<endl;
        break;
    case 3:
        cout<<a*b<<endl; 
        break;
    case 4:
        cout<<a/b<<endl;
        break;  
    default:
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}