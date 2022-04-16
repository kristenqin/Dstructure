/*
 * @Date: 2022-04-03 11:07:10
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-05 17:40:48
 * @FilePath: \Constructing\.vscode\PTA\Match.cpp
 */
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define MAXSIZE 100
#define OVERFLOW -2
#include<cstdio>

typedef int Status;
typedef char SElemType;

typedef struct {
    SElemType* base;
    SElemType* top;
    int stacksize;
}SqStack;

Status InitStack(SqStack &S){
    S.base = new SElemType[MAXSIZE];
    if(!S.base) exit(OVERFLOW);
    S.top = S.base;
    S.stacksize = MAXSIZE;
    return OK;
}

Status Push(SqStack &S, SElemType e){
    if(S.top - S.base == S.stacksize){
        return ERROR;
    }
    *(S.top++) == e;
    return OK;
}
Status Pop(SqStack &S,SElemType &e){
    if(S.top == S.base){
        return ERROR;
    }
    e = *(--S.top);
    return OK;
}
Status GetTop(SqStack S){
    if(S.top != S.base){
        return *(S.top - 1);
    }
}
int main(){
    SqStack S;
    SElemType * temp;
    InitStack(S);
    char s = ' ';// 字符如何初始化
    int flag = 0;
    s = getchar();
    // 自己每次进行相关测试的时候会不怎么有耐心， 不想动脑子自己解决

    // for(int i = 0;i < 10;++i){
    //     s = getchar();
    //     Push(S,s);
    // }
    // for(int i = 0;i < 10;++i){
    //     cout<<GetTop(S)<<" ";
    // }
    // 这部分代码输出结果一直是23


    // 这部分能不能不在源栈的数据结构上进行操作
    // 问题是不知道怎么将temp传参进去

    // for(int i = 0;i < 10;++i){
    //     s = getchar();
    //     Push(S,s);
    //     temp = S.top;
    // }
    // for(int i = 0;i < 10;++i){
    //     cout<<GetTop(S)<<" ";
    // }
    
    // while(s != '\n'){ 
    //     if(s == '(' || '[') Push(S,s);
    //     if(s == ')'){
    //         if(GetTop(S) == '('){
    //             Push(S,s);
    //             flag = 1;
    //         }
    //         else{
    //             flag = 0;
    //         }
    //     }
    //     if(s == ']'){
    //         if(GetTop(S) == '['){
    //             Push(S,s);
    //             flag = 1;
    //         }
    //         else{
    //             flag = 0;
    //         }
    //     }
    //     s = getchar();
    // }
    if(flag) cout<<"yes";
    else cout<<"no";
    return 0;
}     
