#include <iostream>

using namespace std;

int main()
{
    int n;long sum=0;
    cin>>n;
    long *arr;
    arr= new long[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;

    return 0;
}

