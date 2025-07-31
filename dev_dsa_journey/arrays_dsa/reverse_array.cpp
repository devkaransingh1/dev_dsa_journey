#include <iostream>
using namespace std;


//reverse funtion
void reverse(int arr2[],int size2){
    int mid=size2/2; int temp=0;
    for(int i=0;i<mid;i++){
      //swapping
      temp=arr2[i];
      arr2[i]=arr2[size2-i-1];
      arr2[size2-i-1]=temp;
    }
    
    
    cout<<"reversed array = ";
    for(int i=0;i<size2;i++){
        cout<<arr2[i]<<" ";
    }
}

//main 
int main(){
    int arr1[]={23,56,34,77,51,37,54,89};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    reverse(arr1,size1);
    return 0;
}
