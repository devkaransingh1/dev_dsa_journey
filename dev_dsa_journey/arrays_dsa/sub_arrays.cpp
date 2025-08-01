//program to print every subarray using brute force 
#include <iostream>
using namespace std;

int main(){
    int a[]={2,4,7,3,5,9,0,1};
    int size=sizeof(a)/sizeof(a[0]);
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int sub=start;sub<=end;sub++){
                cout<<a[sub];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}