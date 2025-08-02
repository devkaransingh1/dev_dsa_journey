#include <iostream>
using namespace std;

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max_sum=0;
    int curr_sum=0;
    for(int i=0;i<size;i++){
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<max_sum;
    return 0;
}