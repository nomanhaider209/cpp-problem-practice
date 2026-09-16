#include<iostream>
using namespace std;
int main(){
int marks[10];
    cout<<"enter marks";
    for(int i=0;i<10;i++){
        cin>>marks[i];
    }
    for(int i=0;i<10;i++){
        cout<<marks[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+marks[i];
    }
    cout<<"sum is "<< sum<<endl;
    cout<<"average is "<<sum/10;
    
    return 0;
}
