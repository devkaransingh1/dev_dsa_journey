//maximum subarray sum using brute force
#include <iostream>
using namespace std;

int main(){
    int max_sum=0;
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(a)/sizeof(a[0]);
    for(int start=0;start<size;start++){
        int cur_sum=0;
        for(int end=start;end<size;end++){
            cur_sum+=end[a];
            max_sum=max(max_sum,cur_sum);

        }
    }
    cout<<"maximum subarray sum = "<<max_sum;
    return 0;
}