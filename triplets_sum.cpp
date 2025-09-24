#include<iostream>
#include<vector>
 using namespace std;
 int main(){
    vector <int> v(20);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter the velue of x=";
    cin>>x;
    int count=0;
    for( int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                if(v[i]+v[j]+v[k]==x){
                    count++;
            }
        }
    }
 }
 cout<<count;
 }