#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number :"<<endl;
cin>>n;
    for(int i=1;i<n;i++){
         if(n%i==0){
         cout<<"This number is not a prime number.";}
         else{
         cout<<"This is a prime number" ;}
         break;}
return 0;}