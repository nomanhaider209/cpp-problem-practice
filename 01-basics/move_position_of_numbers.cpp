#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
   
    int first=arr[0];
    int last=arr[6];
    for(int i=6;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
