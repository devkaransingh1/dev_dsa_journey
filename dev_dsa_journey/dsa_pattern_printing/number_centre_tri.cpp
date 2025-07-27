#include <iostream>
using namespace std;

void pattern(int n){//funtion definition

    for(int i=0;i<n;i++){//printing lines

        for(int j=0;j<n-i-1;j++){//printing pre spaces
            cout<<" ";
        }

        for(int j=0;j<(2*i+1);j++){//printing stars
            cout<<j+1;
        }

        for(int j=0;j<n-i-1;j++){//printing post spaces
            cout<<" ";
        }

        cout<<endl;//skips to new line
    }
}

int main(){
    int t; cin>>t;//inputting test cases
    for(int i=0;i<t;i++){
        int n; cin>>n; pattern(n);//funtion calling
    }
}