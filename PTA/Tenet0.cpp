/*
 * @Date: 2022-04-09 09:03:15
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 09:03:16
 * @FilePath: \Constructing\.vscode\PTA\Tenet.cpp
 */
#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool judgeTenet(string &expression){
    bool result;
    stack<char> tenet;
    int length = expression.length();
    //对数组长度的边界细节还是不够熟练
    if(length % 2 == 1){
        for(int i = 0;i < length;++i){
            if(expression[i] != tenet.top() && i < length / 2){
                tenet.push(expression[i]);
            }
            if(i == length / 2){
                ++i;
            }
            if(expression[i] == tenet.top() && i > length / 2){
                tenet.pop();
                result = 1;
            }
            else{
                result = 0;
                return result;
            }
        }
    }
    else if(length % 2 == 0){
        for(int i = 0;i < length;++i){
            if(expression[i] != tenet.top() && i <= length / 2){
                tenet.push(expression[i]);
            }
            if(expression[i] == tenet.top() && i > length / 2){
                tenet.pop();
                result = 1;
            }
            else{
                result = 0;
                return result;
            }
        }
    }
    return result;    
}
int main(){
    string expression;
    cin>>expression;
    if(judgeTenet(expression)) cout<<"YES";
    else cout<<"NO";
    return 0;
}