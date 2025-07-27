#include <iostream>
using namespace std;

void pattern(int n){
    
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
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