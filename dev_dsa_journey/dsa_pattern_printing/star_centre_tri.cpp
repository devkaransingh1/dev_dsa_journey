#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){//printing lines

        
        for(int j=0;j<n-i-1;j++){//printing spaces 
            cout<<" ";
        }

        for(int j=0;j<(2*i+1);j++){//printing stars
            cout<<"*";
        }
        
        for(int j=0;j<n-i-1;j++){//printing spaces
            cout<<" ";
        }

        cout<<endl;//skips to newline

    }
}

int main(){
    int t; cin>>t; 
    for(int i=0;i<t;i++){
        int n; cin>>n; pattern(n);
    }
}