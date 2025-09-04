#include<iostream>
using namespace std;
int main(){
    int arr[]={3,7,8,1,17,18,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max1=arr[0],max2=arr[0],max3=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3<<endl;
    return 0;
}