# include <iostream>
using namespace std;

int main(){

int num;

cout<<"Enter number: ";
cin>>num;

int count=0;
if(num==0){
    count=1;
    cout<<"Number of digits in the given number is: "<<count<<endl;
    return 0;
}


while(num!=0){
    count++;
    num=num/10;
}
cout<<"Number of digits in the given number is: "<<count<<endl;

    return  0;
}








