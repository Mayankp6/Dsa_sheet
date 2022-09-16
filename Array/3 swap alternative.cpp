#include<iostream>
using namespace std;

void printarray(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

void swapalternative(int arr[],int size){
for(int i=0;i+1<size;i=i+2){
    swap(arr[i],arr[i+1]);
    }
}

int main(){

int even[8]={5,2,9,4,7,6,1,0};
int odd[5]={11,33,6,45,66};

swapalternative(even,8);
printarray(even,8);
}
