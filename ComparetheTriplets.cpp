#include <iostream>

using namespace std;


int main()
{
    
    int arr1[3],arr2[3];
    int arr3[2];
    int count=0;int count2=0;

    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<3;j++){
        cin>>arr2[j];
    }

    for(int i=0;i<3;i++){
        if(arr1[i]>arr2[i]){
            count++;
        }
        else if (arr2[i]>arr1[i]){
            count2++;
        }
        
    }
    arr3[0]=count;
    arr3[1]=count2;

    for(int i=0;i<2;i++){
        cout<<arr3[i]<<" ";
    }


    
    return 0;
}

