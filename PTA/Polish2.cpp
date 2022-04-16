/*
 * @Date: 2022-04-09 15:33:18
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 15:33:18
 * @FilePath: \Constructing\.vscode\PTA\Polish2.cpp
 */
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution{
    public:
    int evalRPN(vector<string>& expression){
        // 为什么这里定义了一个向量类型的expression欸
        stack<int> result;
        for(string t: expression){
            if(isdigit(t.back())) result.push(stoi(t));
            else{
                int n = result.top();
                result.pop();
                switch(t[0]){
                    case '+': result.top() += n;break;
                    case '-': result.top() -= n;break;
                    case '*': result.top() *= n;break;
                    case '/': result.top() /= n;break;
                }
            }
        }
        return result.top();

    }
};

int main(){
    vector<string>expression; 
    // 直接使用string数组感觉是可以解决空格的问题
    int i = 0;
    // 不结束循环
    while(cin>>expression[i]){
        ++i;
        // 这个循环会不会将空格也输入进去
    }
    // 通过测试之后使用结束循环操作
    Solution solution;
    cout<<solution.evalRPN(expression);
    return 0;
}
