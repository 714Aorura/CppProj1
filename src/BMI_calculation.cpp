// BMI 计算
// Created by Merlin on 2022/8/19.

#include <iostream>

using namespace std;
int main() 
{
    double height, weight, BMI;

    cout << "欢迎使用BMI计算程序";
    cout << "请输入身高(M)：" << endl;
    cin >> height;
    cout << "请输入体重(KG)" << endl;
    cin >> weight;
    BMI = weight / (height * height);
    cout << "你的BMI值为:" << BMI << endl;
    
    if (BMI < 18.5) 
    {
        cout << "偏瘦";
    } 
    else if (BMI <= 25) 
    {
        cout << "正常";
    } 
    else if (BMI <= 28) 
    {
        cout << "超重";
    } 
    else if (BMI <= 32) 
    {
        cout << "肥胖";
    } 
    else 
    {
        cout << "严重肥胖";
    }
    
    return 0;
}