#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> center=nums;
        while(center.size()!=1){
            vector<int> temp;
            for (size_t i = 0; i < center.size(); i+=2)
            {
                if(i%4==0){
                    temp.push_back(min(center[i],center[i+1]));
                }
                else{
                    temp.push_back(max(center[i],center[i+1]));
                }
            }
            center=temp;
        }
        return center[0];
    }
};
using namespace std;
int main(){
    vector<int> nums={1,3,5,2,4,8,2,2};
    vector<int> nums1={3};
    Solution s;
    cout<<s.minMaxGame(nums1)<<endl;
     return 0;
}
