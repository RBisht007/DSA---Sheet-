#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0)   return 1;

    return n*factorial(n-1);
}

int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;

int fact=factorial(n);
cout<<"The factorial of n numbers is "<<fact<<endl;

    return 0;
}