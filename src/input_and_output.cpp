// 练习输入输出
// Created by Merlin on 2022/8/18.

#include <iostream>
using namespace std; //使用std命名空间

int main() 
{
    char name[50];

    cout <<"Input you name:"; // 提示语
    cin >> name; // 使用cin获取输入

    cout <<"Hello " <<name <<".";
    return 0;
}
