#include<iostream>
using namespace std;
int main(){
   int height;
   cout << "Enter the height:"<< endl;
   cin >> height;
   for (int j=0; j<=height;j++)
   {
    cout<<"j="<<j<<endl;
    for(int i=0; i<=j; i++)
    {
        cout<<"*";
    }
    cout << "\n";
   } 
   return 0;
}