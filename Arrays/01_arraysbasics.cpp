//basic arrays operation 



#include <iostream>

using namespace std;

void printarr(int arr[]){
       cout<<"Array elements are"<<endl;
    int n=arr[].size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
return;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elemehts"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    
    // 1. Insertion Operation in array 
    // Inserting at last of array
    int x;
    cout<<endl<<"Enter element to be inserted at last"<<endl;
    cin>>x;
    arr[n]=x;
    n=n+1;
    cout<<"Array elements after insertion at last"<<endl;
    printarr(arr);
    // Inserting at specific position
    int pos;
    cout<<"Enter position to be inserted"<<endl;
    cin>>pos;
    cout<<"Enter element to be inserted at position "<<pos<<endl;
    cin>>x;
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];}
    arr[pos-1]=x;
    n=n+1;
    cout<<"Array elements after insertion at position "<<pos<<endl;
    printarr(arr);
    cout<<endl<<endl;

    // 2. Deletion Operation in array
    cout<<"Deletion operation start now"<<endl;
    
    int arr[5]={1,2,3,4,5};
    //Deleting at the last 
   
    for()



    return 0;

}
