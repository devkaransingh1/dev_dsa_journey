#include <iostream>
#include <vector>
using namespace std;

vector <int>  pairsum(vector <int> nums, int target){
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector <int> mark={2,7,11,15};
    int target=13;
    vector <int> ans=pairsum(mark,target);
    cout<<ans[0]<<" , "<<ans[1];
    return 0;
}