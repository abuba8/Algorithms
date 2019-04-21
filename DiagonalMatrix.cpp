#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int temp=0;
    int temp2=0;
    cin>>n;

    int **arr;
    arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                temp=temp+arr[i][j];
            }
            if((i+j)==(n-1)){
                temp2=temp2+arr[i][j];
            }
        }
    }
    

if(temp>temp2){
    temp=temp-temp2;
    cout<<temp;
}
else
cout<<temp2-temp;

    return 0;
}

