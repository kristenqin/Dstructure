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
        int leftindex2 = 0;//感觉这样对变量进行赋值有点儿没带脑子多少 
        int rightindex2 = right;
        int index1 = -1;
        int index2 = -1;
        vector<int>result;
        //设定最大时间复杂度是n
        for(int i = 0;i <= right; ++i){
            index1 = i;
            a = numbers[i];
            b = target - a;
            leftindex2 = i + 1;
            while(leftindex2 <= rightindex2){
                int mid = leftindex2 + (rightindex2 - leftindex2) / 2;
                if(numbers[mid] == b){
                    index2 = mid;
                    result.push_back(index1+1);
                    result.push_back(index2+1);
                    return result;
                }
                else if(numbers[mid] > b){
                    rightindex2 = mid - 1;
                }
                else if(numbers[mid] < b){
                    leftindex2 = mid + 1;
                }
            }
        }
        return result;
    }
};
int main(){
    int target = 9;
    vector<int> nums = {2,7,11,15};
    vector<int> result;
    Solution solution;
    result = solution.twoSum(nums,target);
    //在target值数组中没有的时候没有返回结果 
    for(int i = 0;i < 2;++i){
        cout<<result[i]<<" ";
    }
    return 0;
}



// 问题
// 在写代码之前脑子不太清楚, 代码不过简洁
// 题目输出细节没有把握住