/*
 * @Date: 2022-04-05 17:53:58
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-05 21:05:35
 * @FilePath: \Constructing\.vscode\LeetCode\3LC0.cpp
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //先将所有操作写到一个函数里面, 之后封装成单独的函数
        int a = 0;
        int b = target - a;
        //a, b在循环过程中都会发生变化
        int left = 0;
        int right = numbers.size() - 1;

        int rightindex1 = 0;
        int leftindex2 = rightindex1;
        
        int index1 = -1;
        int index2 = -1;
        vector<int>result;
        //设定最大时间复杂度是n
        while(left <= right){
            int i = 0;
            index1 = i;
            a = numbers[i];
            b = target - a;
            leftindex2 = i + 1;
            while(leftindex2 <= right){
                int mid = leftindex2 + (right - leftindex2) / 2;
                if(numbers[mid] == b){
                    index2 = mid;
                    result.push_back(index1);
                    result.push_back(index2);
                    return result;
                }
                else if(numbers[mid] > b){
                    right = mid - 1;
                }
                else if(numbers[mid] < b){
                    leftindex2 = mid + 1;
                }
            }
            ++i;
        }
        return result;
    }
};
int main(){
    int target = 3;
    vector<int> nums = {1,2,3,4};
    vector<int> result;
    Solution solution;
    result = solution.twoSum(nums,target);
    for(int i = 0;i < 2;++i){
        cout<<result[i]<<" ";
    }
    return 0;
}