#include <iostream>
using namespace std;


//print unique values of array
void count(int arr2[],int size2){
    
    for(int i=0;i<size2;i++){
        int count=0;
        for(int j=0;j<size2;j++){
            if(i==j){
                continue;
            }
            if(arr2[i]==arr2[j]){
                count++;
            }

            
        }
    if(count==0){
        cout<<"unique elements of array = "<<arr2[i]<<" ";
    }
    }

}

int main(){
    int arr1[] = {5, 6, 5, 6, 5, 6, 7};

    int size1=sizeof(arr1)/sizeof(arr1[0]);
    count(arr1,size1);
    return 0;
}