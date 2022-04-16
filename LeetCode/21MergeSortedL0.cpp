/*
 * @Date: 2022-04-14 21:25:16
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-14 21:25:16
 * @FilePath: \LeetCode\21MergeSortedL.cpp
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// 看不太懂上面cpp函数定义
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode *next): val(x), next(next){}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 创建占位头
        // 自己: ListNode * head = new ListNode;
        // 答案: ListNode* prehead = new ListNode(-1); 
        // (-1)的操作需要查语法
        // 为什么答案代码直接采用这种方式进行初始化
        // new不是有两种放回方式吗
        // 是不是自己这种不能创建一个头结点, 只是创建了一个头指针
        ListNode* prehead = new ListNode(-1);

        // ListNode* prev = preHead;
        // 这个语句是对移动中的指针的初始化
        // 为什么答案还要多次一举呢 
        // 查看正常指针地址赋值语法
        ListNode* prev = prehead;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                prev->next = list1;
                list1 = list1->next;
            }
            else{
                prev->next = list2;
                list2 = list2->next;
            }
            prev = prev->next;
            // 自己操作时很可能忘记对移动指针进行移动
        }
        prev->next = list1 == nullptr ? list2 : list1;
        // nullptr指针判断
        return prehead->next;
        // return prehead->next;
        // 这个return语句这样写是为了正常返回一个有意义的链表
        // 自己平时写的时候可能注意不到
        
    }
};