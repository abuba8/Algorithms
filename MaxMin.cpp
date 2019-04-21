#include <iostream>
using namespace std;

int main(){
	int *arr;
	int n,k,temp;
	int unfairness =0;
	cin>>n>>k;
	 arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	


	for(int i=1;i<k;i++){
		temp=arr[k]-arr[i];
		if(temp>unfairness){
			unfairness=temp;
		}
	}
	cout<<unfairness;
	
	return 0;
}
