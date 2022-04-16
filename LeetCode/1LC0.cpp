/*
 * @Date: 2022-04-05 15:33:12
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-05 17:40:26
 * @FilePath: \Constructing\.vscode\LeetCode\1LC0.cpp
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(leftboundSearch(nums,target));
        result.push_back(rightboundSearch(nums,target));
        return result;
    }
    int leftboundSearch(vector<int>& nums,int target){
        int left = 0;
        // int right = nums.size();
        int right = nums.size() - 1;
        //注意mid初始化的位置
        while(left <= right){
            // int mid = left + (left - right) / 2;
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                right = mid - 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
        }
        if(left >= nums.size() || nums[left] != target) return -1;
        //不理解这里特殊情况的输出判断
        return left;
    }
    int rightboundSearch(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                left = mid + 1;
            } 
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
        }
        if(right < 0 || nums[right] != target) return -1;
        //为啥这里是right < 0
        return right;
    }      
    
};

int main(){
    vector<int> nums = {1,2,2,2,3,3,4};
    vector<int>result;
    int target = 2;
    Solution solution;
    result =  solution.searchRange(nums,target);
    for(int i = 0;i < 2;++i){
        cout<<result[i]<<" ";
    }
    // 注意这里对结果输出的处理
    // 比较神奇的是vector可以直接通过调用类返回,
    // 但是不能直接输出
    return 0;
}