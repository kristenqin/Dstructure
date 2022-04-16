/*
 * @Date: 2022-04-14 21:50:19
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-14 21:54:37
 * @FilePath: \LeetCode\23MergeKSortedL0.cpp
 */
// ListNode* mergeTwoLists(ListNode *a, ListNode *b) {
//     if ((!a) || (!b)) return a ? a : b;
//     ListNode head, *tail = &head, *aPtr = a, *bPtr = b;
//     while (aPtr && bPtr) {
//         if (aPtr->val < bPtr->val) {
//             tail->next = aPtr; aPtr = aPtr->next;
//         } else {
//             tail->next = bPtr; bPtr = bPtr->next;
//         }
//         tail = tail->next;
//     }
//     tail->next = (aPtr ? aPtr : bPtr);
//     return head.next;
// }


// 感觉问题本身并不困难
// 主要是自己没有对复杂数据结构的问题进行简化的习惯

// [[1,2,3],[4,5],[1,2]]
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> solution(vector<int> &a,vector<int> &b){
        vector<int> result = {};
        for(int i = 0,j = 0,m = 0;i < a.size(),j < b.size();++i,++j,++m){
            if(a[i] <= b[j]){
                result[m] = a[i];
            }
            else{
                result[m] = b[j];
            }
        }
        // 直接使用push_back会方便一些
        // for(int i = 0,j = 0;i < a.size(),j < b.size();++i,++j){
        //     if(a[i] <= b[j]){
        //         result[i] = a[i];
        //     }
        //     else{
        //         result[i] = b[i];
        //     }
        // }
        // 感觉自己写的这种循环方式就不像正常人会想的思路
        // 感觉不顺手而且还很奇怪


        // a.size() > b.size()写>符号的时候有点儿恍惚了

        // 这种边界条件想办法使用数学公式进行推导
        // 每次现写的时候都要重新想一遍非常浪费时间

        // for(int j = b.size() - 1;j < a.size() - b.size();++j){

        // }
        
        if(a.size() > b.size()){
            for(int j = b.size() - 1;j < a.size() - b.size();++j){
                result.push_back(a[j]);
            }
        }
        else{
            for(int j = a.size() - 1;j < a.size() - b.size();++j){
                result.push_back(b[j]);
            }
        }
        // 两个循环判断条件如果写一起, 最后跳出循环是怎样的呢
        // 感觉还是之前自己瞎写题留下的不好写题习惯
        // while(1){
            
        // }
        return result;
    }
    // 注意返回的是一整个数组
    vector<int> mergeK(vector<vector<int>> &list){
        vector<int> ans = {};
        // 向量初始化注意问题
        // vector<int> ans = {0};
        for(int i = 0;i < list.size();++i){
            ans = solution(ans,list[i]);
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> list = {{1,2,3,4},{1,2},{1,2,5,6}};
    vector<int> result = {};
    Solution solution;
    result = solution.mergeK(list);
    for(int i = 0;i < result.size();++i){
        cout<<result[i];
    }
    return 0;
}
