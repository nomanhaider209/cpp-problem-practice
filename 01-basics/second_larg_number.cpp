#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 10, 19, 4, 11, 31, 85};
    int x = sizeof(arr) / sizeof(arr[0]);

    int lar = arr[0];
    int sec = arr[1];

    if(sec > lar){
        int temp = lar;
        lar = sec;
        sec = temp;
    }

    for(int i = 2; i < x; i++){
        if(arr[i] > lar){
            sec = lar;
            lar = arr[i];
        }
        else if(arr[i] > sec){
            sec = arr[i];
        }
    }

    cout << "Second largest = " << sec;

    return 0;
}
