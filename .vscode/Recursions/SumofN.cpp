// calculate the sum of n numbers using recursion

#include <iostream>
using namespace std;

void total (int sum,int n){
if(n<1){
    cout<<"The sum is "<<sum<<endl;
    return;
}
total(sum,n-1);
}


int main(){
int n;
cout<<"Enter the num";
cin>>n;
total(0,n);

return 0;
}
/*
#include <iostream>
using namespace std;

int total (int n){
if(n==0)  return 0;

return n+total(n-1);
}


int main(){
int n;
cout<<"Enter the num";
cin>>n;
int sum=total(n);
cout<<"The sum is "<<sum<<endl;
return 0;
}
*/