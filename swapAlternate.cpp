// Swap alternate elements of an Array
// 1,2,3,4,5
// => 2,1,4,3,5

#include<iostream>
using namespace std;

int main(){

    int arr[]={2,1,4,3,6,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    // swapping

    for (int i=0;i<len;i+=2){
        int temp=0;

        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for (int i=0;i<len;i++){
        cout<<arr[i];
    }

    return 0;
}