#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int *arr;
    arr=new int [n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=1,count=0,diff;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if((arr[j]-arr[i])==k )
                    count++;
            
        }
    }
    cout<<count;
    return 0;
}



