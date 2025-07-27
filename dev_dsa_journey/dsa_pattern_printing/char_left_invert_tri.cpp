#include <iostream>
using namespace std;

void pattern(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i;j++){
            cout<<ch<<" ";
            ch=ch+1;
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