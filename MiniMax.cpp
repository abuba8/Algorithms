#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<unsigned long int> arr(8);
    unsigned long int minValue = ULONG_MAX;
    unsigned long int maxValue = 0;
    unsigned long int allSum = 0;
    for(int i = 0; i < 8; i++){
       cin >> arr[i];
        allSum += arr[i];
        minValue = min(minValue,arr[i]);
        maxValue = max(maxValue,arr[i]);
    }
    
    cout<<allSum - maxValue<<" "<<allSum - minValue<<endl;
    return 0;
}
