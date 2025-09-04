#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
     vector <int> v(5);
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int x;
     cin>>x;
     int count=0;
     for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(abs(v[i]-v[j])==x){
                count++;
 }
 }
     }
     if(count>0){
        cout<<"yes";
     }
     else{
        cout<<"no";
     }
 }
