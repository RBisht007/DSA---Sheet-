#include <iostream>
using namespace std;

void funt(int n, int i){
   if(i>n){
    return;
   }
    cout<<i<<endl;
    funt(n,i+1);

}

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
int i=1;
funt(n,i);

}