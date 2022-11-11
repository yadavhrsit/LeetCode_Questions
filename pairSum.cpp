#include<iostream>
using namespace std;

int pairSum(int arr[],int size,int s){
    // sorting the array using bubble sort
    for (int i = 0; i < size; ++i){
    for (int j = 0; j < size - i; ++j){
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j+1] = temp;
      }
    }
  }

    // pair sum logic
    for (int i = 0; i < size-1; ++i){
    for (int j = i+1; arr[i]+arr[j] <= s; ++j){
      if (arr[i]+arr[j] != s)
      continue;
      cout<<arr[i]<<" + "<<arr[j]<<" = "<<s<<endl;
    }
  }
    return 0;

}


int main(){
    int len,s;
    cout<<"Enter length of Array"<<endl;
    cin>>len;
    cout<<"Enter the value of S"<<endl;
    cin>>s;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    pairSum(arr,len,s);
    return 0;
}