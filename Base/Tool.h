#pragma once

#include <iostream>
#include<vector>

using namespace std;

// 返回两个数中的最大值
int max(int a, int b);

// 生成小于某个最大数的随机数
int random(int max);

// 指针学习
void pointLearn();

// 冒泡排序
void bubbleSort(int* arr, int len);

// 打印数组
void printArr(int* p, int len);

//字符串分割函数
std::vector<std::string> split(std::string str, std::string pattern);

