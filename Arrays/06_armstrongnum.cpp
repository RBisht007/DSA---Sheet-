#include <iostream>
using namespace std;

int main(){
int num;
cout<<"Enter the number :";
cin>>num;
int originalnum=num;
int sum=0;

int rem=0;
while(num>0){
rem=num%10;
sum+= (rem*rem*rem);
num=num/10;

}

if(sum==originalnum){

cout<<"The number is armstrong number"<<endl;
}
else{
    cout<<"The number is not armstrong number"<<endl;

}
    return 0;
}