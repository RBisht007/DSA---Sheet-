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