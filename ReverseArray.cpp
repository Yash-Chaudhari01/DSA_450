#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size){
int s=0;
int e =size-1;
while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}
}

int main(){
    int arr[6]={1,2,3,4,5};
    int size=5;
    ReverseArray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}