#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

 for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
 }
 return 0;
}

int main(){

int arr[]={5,7,-2,10,22};
cout<<"enter the element search for ";
int key;
cin>>key;

bool found = search(arr,5,key);
if(found){
    cout<<"Key is found";
}
    else
        cout<<"Key is not found";
}
