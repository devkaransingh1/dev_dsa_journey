#include <iostream>
using namespace std;

void pattern(int n){
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        for(int j=0;j<n-i;j++){
            cout<<" ";
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