/*
 * @Date: 2022-04-09 09:02:26
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 09:02:26
 * @FilePath: \Constructing\.vscode\PTA\Match3.cpp
 */

#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
using namespace std;
// bool judgeMatch(stack<char> &nums){

// } 一上手就和别人想的不一样， 题解是将字符串引用作为参数，自己直接将stack作为参数
bool judgeMatch(string& expression){
    stack<char> sqstack;
    //string容器真的太好用了， 正常用string，自己还想怎么进行切片， 之后或许带着这样的问题去阅读相关容器源码
    bool flag = 0;
    for(int i = 0;i < expression.length();++i){
        switch(expression[i]){
            case '{':
            case '[':
            case '(':
                sqstack.push(expression[i]);
                break;
            case ')':
                if(!sqstack.empty() && sqstack.top() == '('){
                    flag = 1;
                    sqstack.pop();
                }
                break;
            case ']':
                if(!sqstack.empty() && sqstack.top() == ']'){
                    flag = 1;
                    sqstack.pop();
                }
                break;
            case '}':
                if(!sqstack.empty() && sqstack.top() == '{'){
                    flag = 1;
                    sqstack.pop();
                }
                break;
            default:;
        }
    }
    return flag; 
    // 看看这里使用size() 和 length() 有什么区别
}
int main(){
    string expression;
    cin>>expression;
    if(judgeMatch(expression)){
        cout<<"yes";
    }
    else cout<<"no";
    return 0;
}

