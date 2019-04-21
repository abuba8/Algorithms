#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr;
    arr=new int[n];

    float c1=0;
    float c2=0;
    float c3=0;
    float sum;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            c1++;
        }
        else if(arr[i]<0){
            c2++;
        }
        else if(arr[i]==0){
            c3++;
        }
    }

    sum=c1/n;
    cout<<sum<<endl;
    sum=c2/n;
    cout<<sum<<endl;
    sum=c3/n;
    cout<<sum<<endl;


    return 0;
}


