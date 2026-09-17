#include<iostream>
using namespace std;
int main(){
    int arr[]={12,33,4,5,6,7,12,7,4,6,445};
    int x=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<x;i++){
        bool duplicate= false;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                duplicate=true;
            }
        }
        if(duplicate==false){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}
