#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int original=num;
    int rem=0,res=0;
    while(num!=0){
        rem=num%10;
        res=res*10+rem;
        num=num/10;
    }
    if(original==res){
        cout<<"The number is a palindrome number"<<endl;
    }
    else{
        cout<<"The number is not a palindrome number"<<endl;
    }


    return 0;
}