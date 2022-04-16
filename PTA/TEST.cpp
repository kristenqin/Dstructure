/*
 * @Date: 2022-04-03 20:29:54
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-05 17:40:43
 * @FilePath: \Constructing\.vscode\PTA\test.cpp
 */
#include<iostream>
#include<stack>
using namespace std;
bool judgeMatch(const string &expression){
    stack<char>stack;
    for(size_t i = 0; i < expression.length();++i){
        //为什么这里使用switch 不使用if呢
        switch(expression[i]){
            case '(':
            case '[':
            case '{':
            //少考虑括号情况了
                stack.push(expression[i]);
                break;
            case ')':
                // if((!stack.empty()) && stack.top() == "(")
                // 
                {

                }
        }
    }
}