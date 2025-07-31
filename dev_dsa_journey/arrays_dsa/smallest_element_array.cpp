#include <iostream>
using namespace std;


//smallest element funtion
void smallest(int arr2[],int size2){
    int small=arr2[1];
    int that_index=0;
    for(int i=0;i<size2;i++){
        if(arr2[i]<small){
            small=arr2[i];
            that_index=i;
        }
    }
    cout<<"smallest element in array at index "<<that_index<<" = "<<small;
}

//largest element funtion
void largest(int arr2[],int size2){
    int largest=arr2[1];
    int that_index=0;
    for(int i=0;i<size2;i++){
        if(arr2[i]>largest){
            largest=arr2[i];
            that_index=i;
        }
    }
    cout<<"largest element in array at index "<<that_index<<" = "<<largest;
}




//main 
int main(){
    int arr1[]={3,1,5,7,3,6,-7,2,5,6,44,66,7,444,11};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    smallest(arr1,size1); //funtion call
    cout<<endl;
    largest(arr1,size1); //funtion call
    return 0;
}