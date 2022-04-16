/*
 * @Date: 2022-04-09 20:59:15
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-09 20:59:15
 * @FilePath: \Constructing\.vscode\PTA\Bank0.cpp
 */
#include<iostream>
#include<queue>
#define maxsize 100000
using namespace std;

void solution(int member[],int n){
    queue<int>A;
    queue<int>B;
    for(int i = 0;i < n;++i){
        if(member[i] % 2 == 0) A.push(member[i]);
        else B.push(member[i]);
    }
    // 想想如何边存储边处理
    // 想找个缓冲空间来着
    for(int i = 0,j = 0;i < A.size(),j < B.size();++i){
        
    }
}
int main(){
    int n;
    int member[maxsize];
    cin>>n;
    for(int i = 0;i < n;++i){
        cin>>member[i];
    }
    solution(member,n);
    return 0;
}