#include <iostream>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int pof[n];

for(int i=0;i<n;i++){
    cin>>pof[i];
}

int result = 0;
int x,temp;

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(pof[i]<pof[j]){
            temp=pof[i];
            pof[i]=pof[j];
            pof[j]=temp;
        }
    }
}

for (int i=0;i<n;i++){
    x=i/k;
    result+= (x+1)*pof[i];
}
cout<<result;

    return 0;
}
