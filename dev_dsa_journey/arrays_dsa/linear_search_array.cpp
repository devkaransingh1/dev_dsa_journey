#include <iostream>
using namespace std;

//search funtion
void linearsearch(int arr2[],int key,int size2){
    int flag=0,index=0;
    for(int i=0;i<size2;i++){
        if(arr2[i]==key){
            flag=1;
            index=i;
        }
    }
    if(flag==0){
        cout<<"element "<<key<<" not found in the array.";
    }
    if(flag==1){
        cout<<"element "<<key<<" found at index = "<<index;
    }

}

//main
int main(){
    int arr1[]={25,64,61,74,63,33,52,21,54,69,46};
    int element;
    cin>>element;
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    linearsearch(arr1,element,size1);  //funtion call
    return 0;
}