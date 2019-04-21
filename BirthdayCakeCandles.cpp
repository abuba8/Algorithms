#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int *ar;
    ar=new int[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int max=ar[0];
        int count=0;
        for(int i=0;i<n;i++){
            if(ar[i]>max){
                max=ar[i];
            }
            
        }
        for(int i=0;i<n;i++){
                if(ar[i]==max){
                    count++;
                }
            }
cout<<count;
        
    return 0;
}

