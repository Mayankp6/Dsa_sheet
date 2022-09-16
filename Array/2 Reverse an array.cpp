#include<iostream>
using namespace std;

void reverse(int arr[],int n){
int start=0;
int end = n-1;

while(start<=end){
    swap(arr[start],arr[end]);

    start++;
    end--;
}
}

void printarr(int arr[],int n){

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){

int arr[6]={1,34,5,66,78,7};
reverse(arr,6);
printarr(arr,6);
}
