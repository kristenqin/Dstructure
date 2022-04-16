/*
 * @Date: 2022-04-05 16:30:17
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-05 17:46:52
 * @FilePath: \Constructing\.vscode\LeetCode\2LC0.cpp
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int bSearch(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int result = -1;//这里直接考虑未找到目标值情况
        while(left <= right){
            int mid = left + ((right - left) / 2);
            if(nums[mid] == target){
                result = mid;
                //程序运行无法输出结果的原因
                return result;
                //这里不进行return 无法在相等的时候跳出循环
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
        }
        return result;
    }
};
int main(){
    //使用题解代码, 测试得出主函数部分没有问题
    vector<int> nums = {1,2,2,3,4,5,6};
    int target = 2;
    Solution solution;
    cout<<solution.bSearch(nums,target);
    return 0;
}