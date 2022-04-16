/*
 * @Date: 2022-04-09 10:11:00
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 10:12:01
 * @FilePath: \Constructing\.vscode\PTA\Tenet1.cpp
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
            if(i < length / 2){
                tenet.push(expression[i]);
            }
            else if(i > length / 2){
            	if(expression[i] == tenet.top()){
            		tenet.pop();
                	result = 1;
				}
				else{
					result = 0;
					return result;
				}
            }
        }
    }
    else if(length % 2 == 0){
        for(int i = 0;i < length;++i){
            // if(i<= length / 2) 在这里有等号的时候没有正确输出内容
            if(i < length / 2){
                tenet.push(expression[i]);
//                test
//                cout<<expression[i]<<" "; 
            }
            
            else if(i >= length / 2){
//            	test
//				cout<<"this part test:" ;
            	if(expression[i] == tenet.top()){
            		tenet.pop();
                	result = 1;
//                	test
//					cout<<expression[i]<<" ";
				}
				else{
					result = 0;
					return result;
					//这里直接返回结果 
				}
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