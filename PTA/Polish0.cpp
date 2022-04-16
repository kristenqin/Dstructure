/*
 * @Date: 2022-04-09 11:06:53
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 11:06:54
 * @FilePath: \Constructing\.vscode\PTA\Polish0.cpp
 */
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int solution(string & expression){
    stack<char> result;
    int num1;
    int num2;
    int num;
    for(int i = 0;i < expression.length();++i){
        if(expression[i] >= '0' && expression[i] <= '9'){
            result.push(expression[i]);
        }
        else{
            switch(expression[i]){
                case '+':
                    num1 = int(result.top());
                    result.pop();
                    num2 = int(result.top());
                    result.pop();
                    num = num1 + num2;
                    result.push(num);
                case '-':
                    num1 = int(result.top());
                    result.pop();
                    num2 = int(result.top());
                    result.pop();
                    num = num1 - num2;
                    result.push(num);
                case '*':
                    num1 = int(result.top());
                    result.pop();
                    num2 = int(result.top());
                    result.pop();
                    num = num1 * num2;
                    result.push(num);
                case '/':
                    num1 = int(result.top());
                    result.pop();
                    num2 = int(result.top());
                    result.pop();
                    num = num1 / num2;
                    result.push(num);
            }
        }
    }
    return num;
}
int main(){
    string expression;
    cin>>expression;
    cout<<solution(expression);
    return 0;
}