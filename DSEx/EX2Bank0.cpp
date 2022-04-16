/*
 * @Date: 2022-04-14 17:29:06
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-14 17:29:08
 * @FilePath: \DSEx\EX2Bank.cpp
 */
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

void solution(queue<int>&A,queue<int>&B){
    // 两个同时进行的循环这样写没有在循环体中进行判空操作
    // for(int i = 0;i<max(A.size()/2,B.size());++i){
    //     A.pop();
    //     A.pop();
    //     B.pop();
    // }
    // 如果用两个变量j进行操作还需要注意一些细节问题
    // 注意这种方法最后输出结果
    // 8 2 1 3 9 4 11 13 15
    // 1329114
    // 没办法控制空格, 而且没有将所有结果输出
        // 初步判断是对判空操作以及pop操作不够了解
        // 尝试另一组数据
        // 得出自己的循环控制有问题
    
    //解决办法
        // 需要自己独立实现队列结构
    for(int i = 0;i<max(A.size(),B.size());++i){
        if(!A.empty()){
        	cout<<A.front();
            A.pop();
            cout<<A.front();
            A.pop();
		}
        else{
            return;
        }
        if(!B.empty()){
        	cout<<B.front();
            B.pop();
		}
        else{
            return;
        }
    }

}


int main(){
    int n;
    cin>>n;
    int number = 0;
    queue<int>A;
    queue<int>B;
    for(int i = 0;i < n;++i){
        cin>>number;
        if(number % 2 == 1){
            A.push(number);
        }
        else{
            B.push(number);
        }
    }
    solution(A,B);
    return 0;
}


// // 这部分代码修改完之后8 2 1 3 9 4 11 13 15测试样例只输出了三个结果
// // 代码修改
// /*
//  * @Date: 2022-04-14 17:29:06
//  * @LastEditors: Bigorrila
//  * @LastEditTime: 2022-04-14 17:29:08
//  * @FilePath: \DSEx\EX2Bank.cpp
//  */
// #include<iostream>
// #include<queue>
// #include<cmath>
// using namespace std;

// void solution(queue<int>&A,queue<int>&B){
//     // 两个同时进行的循环这样写没有在循环体中进行判空操作
//     // for(int i = 0;i<max(A.size()/2,B.size());++i){
//     //     A.pop();
//     //     A.pop();
//     //     B.pop();
//     // }
//     // 如果用两个变量j进行操作还需要注意一些细节问题
// //    代码的循环边界写得不够精细 
//     for(int i = 0,j = 0;i<A.size(),j < B.size();){
//         if(!A.empty()){
//         	cout<<A.front();
//         	A.pop();
//             cout<<A.front();
//             A.pop();
//             i += 2;
// 		}
//         if(!B.empty()){
//         	cout<<B.front();
//         	B.pop();
//         	j += 1;
// 		}
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int number = 0;
//     queue<int>A;
//     queue<int>B;
//     for(int i = 0;i < n;++i){
//         cin>>number;
//         if(number % 2 == 1){
//             A.push(number);
//         }
//         else{
//             B.push(number);
//         }
//     }
//     solution(A,B);
//     return 0;
// }