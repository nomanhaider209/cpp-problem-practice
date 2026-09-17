#include<iostream>
using namespace std;
int main(){
    int sale[7];
    cout<<"enter sales"<<endl;
    for(int i=0;i<7;i++){
        cin>>sale[i];
    }
    for(int i=0;i<7;i++){
        cout<<sale[i]<<" ";
    }
    cout<<endl;
    int high=0;
    for(int i=0;i<7;i++){
        if(sale[i]>high){
            high=sale[i];
        }
    }
    cout<<"highest sale is "<<high<<endl;
    int low=sale[0];
    for(int i=0;i<7;i++){
        if(sale[i]<low){
            low=sale[i];
        }
    }
    cout<<"lowest is "<<low<<endl;
    int sum=0;
    for(int i=0;i<7;i++){
        sum=sum+sale[i];
    }
    cout<<"sum is "<<sum<<endl;
    int av=sum/7;
    cout<<"average is "<<av<<endl;
    int greater=0;
    for(int i=0;i<7;i++){
        if(sale[i]>av){
            greater++;
        }
    }
    cout<<"greater is "<<greater<<endl;
  int highest=sale[0];
  int day=1;
  for(int i=1;i<7;i++){
      if(sale[i]>highest){
          day=i;
      }
  }
    cout<<"hight sale day is "<<day<<endl;
    
    
    
    
    
    
    
    return 0;
}
