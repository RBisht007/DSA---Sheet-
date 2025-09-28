#include <iostream>
using namespace std;

int main(){

int num;
cout<<"Enter the number :";
cin>>num;

int flag=0;

for(int i=2;i<num;i++){
    if(num%i==0){
        flag=1;
        break;
    }
}

if(flag==0){
    cout<<"The number is prime"<<endl;
}
else{
    cout<<"The number is not prime"<<endl;
}

    return 0;
}