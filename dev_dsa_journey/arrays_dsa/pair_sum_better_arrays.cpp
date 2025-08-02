#include <iostream>
#include <vector>
using namespace std;
//return the correct index of ONLY sorted arrays

vector <int> pairsum(vector <int> nums,int target){
    int n=nums.size();
    vector <int> ans;
    int i=0,j=n-1;
    while(i<j){
        int ps=nums[i]+nums[j];
        if(ps < target){
            i++;
        }
        if(ps>target){
            j--;
        }
        if(ps==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int>nums={2,8,11,15};
    int target=13;
    vector <int> ans=pairsum(nums,target);
    cout<<ans[0]<<" , "<<ans[1];
    return 0;
}