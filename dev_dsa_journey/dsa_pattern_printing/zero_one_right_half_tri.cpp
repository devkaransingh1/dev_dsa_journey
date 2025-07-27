#include <iostream>
using namespace std;

void pattern(int n){
    int start1=0; int start2=1;
    for(int i=0;i<n;i++){
        int start1=0; int start2=1;
        if(i%2==0){
            for(int j=0;j<i+1;j++){
                cout<<start2<<" ";
                start2=1-start2;
            }
        }
        else{
            for(int j=0;j<i+1;j++){
                cout<<start1<<" ";
                start1=1-start1;
            }
        }
        cout<<endl;
    }
}

int main(){
    int t; cin>>t; 
    for(int i=0;i<t;i++){
        int n; cin>>n; pattern(n);
    }
}