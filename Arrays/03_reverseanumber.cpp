#include <iostream>
using namespace std;
int main(){
int num;
cout<<"ENter the number: "<<endl;
cin>>num;
int original=num;

int rem=0,res=0;

while(num!=0){
    rem=num%10;
    res=res*10+rem;
    num=num/10;
}

cout<<"Original Number"<<endl;
cout<<original<<endl;

cout<<"Reversed Number"<<endl;
cout<<res<<endl;

    return 0;
}