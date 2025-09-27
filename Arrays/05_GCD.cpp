#include <iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    cin >> num1 >> num2;

    int max=1;
    if(num1>num2){
        for(int i=1;i<=num2/2;i++){
         if(num1%i==0 && num2%i==0){
            max=i;
         }

        }
    }
    else {
        for(int i=1;i<=num1/2;i++){
         if(num1%i==0 && num2%i==0){
            max=i;
         }

        }
    }

    cout<<"The GCD is :"<<max<<endl;


    return 0;
}