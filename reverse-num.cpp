#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number you want to reverse ."<<endl;
cin>>n;
int reverse=0;
    while(n>0){
        // int lastdigit=n%10;
        // reverse=reverse*10+lastdigit;
        reverse=reverse*10+n%10;
        n=n/10;}
        cout<<reverse<<endl;
        cout<<"The given number have been successfully reversed.";
return 0;}