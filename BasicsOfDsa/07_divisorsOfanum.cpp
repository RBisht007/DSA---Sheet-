#include <bits/stdc++.h>
using namespace std;

int main(){
int num;
cout<<"Enter the number :";
cin>>num;
vector<int> divisors;

for(int i=1;i<=num/2;i++){
    if(num%i==0){
        divisors.push_back(i);
    }
}

cout<<"The divisors of "<<num<<" are : ";
for(auto it:divisors){
    cout<<it<< " ";

}
cout<<endl;
    return 0;

}