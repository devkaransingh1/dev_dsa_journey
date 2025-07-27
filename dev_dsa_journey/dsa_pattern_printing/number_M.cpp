#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }

        for(int j=0;j<=(2*n-2-2*i);j++){
            cout<<" ";
        }
        
        for(int j=i;j>=0;j--){
            cout<<j+1;
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