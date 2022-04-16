/*
 * @Date: 2022-04-09 15:32:42
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 15:32:43
 * @FilePath: \Constructing\.vscode\PTA\Polish1.cpp
 */

// 这部分代码没有输出正确结果， 不知道为什么

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int solution(string & expression){
//	test
//  需要解决string输入空格的问题 
	for(int i = 0;i < expression.length();++i){
		cout<<expression[i]<<" ";
	} 
	cout<<endl;
    stack<int> result;
    int num1;
    int num2;
    int num;
    for(int i = 0;i < expression.length();++i){
//    	cout<<"expression"<<i<<":"<< expression[i]<<" ";
        if(expression[i] >= '0' && expression[i] <= '9'){
            result.push(stoi(&expression[i]));
//            cout<<"transfer:"<<i<<":"<<expression[i];
        }
        else{
            switch(expression[i]){
                case '+':
//                    num1 = int(result.top());
//                    对强制类型转换的理解有壁
					num1 = result.top();
                    result.pop();
//                    test
//					cout<<"this part:"<<num1<<endl;
                    num2 = result.top();
//                    test
                    result.pop();
//					cout<<"this part:"<<num2<<endl;
                    num = num1 + num2;
                    result.push(num);
                    break;
                case '-':
                    num1 = result.top();
//					cout<<"this part:"<<num1<<endl;                    
                    result.pop();
                    num2 = result.top();
//					cout<<"this part:"<<num2<<endl;                    
                    result.pop();
                    num = num1 - num2;
                    result.push(num);
                    break;
                case '*':
                    num1 = result.top();
                    result.pop();
//                    cout<<"this part:"<<num1<<endl;   
                    num2 = result.top();
                    result.pop();
//                    cout<<"this part:"<<num2<<endl;   
                    num = num1 * num2;
                    result.push(num);
                    break;
                case '/':
                    num1 = result.top();  
                    result.pop();
//                    cout<<"this part:"<<num1<<endl; 
                    num2 = result.top();
                    result.pop();
//                    cout<<"this part:"<<num2<<endl;   
                    num = num1 / num2;
                    result.push(num);
                    break;
            }
        }
    }
    return num;
}
int main(){
    string expression;
    cin>>expression;
    cout<<solution(expression);
//    第一遍测试显示没有进入选择语句 
//switch case语句在没有写break的时候从头执行到最后是怎样的 
    return 0;
}