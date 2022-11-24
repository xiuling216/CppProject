//////////////////////////////////////////////////////////////////////////
// 同元软控信息技术有限公司 C++ 程序试题
// 警告：苏州同元软控版权所有，请勿扩散传播，否则将追究法律责任！
// Vertion 4.7
// 2020.12
//////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

//////////////////////////////////////////////////////////////////////////
// (1) 改错题
//////////////////////////////////////////////////////////////////////////

void TestVectorTraversor()
{
    vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    for (int i = array.size() - 1; i >= 0; --i)
    {
        cout << array[i] << endl;
    }
}

//////////////////////////////////////////////////////////////////////////
// (2) 改错题
//////////////////////////////////////////////////////////////////////////

char* Get100Memory(char* p)
{
    p = new char[100];
    return p;
}

//////////////////////////////////////////////////////////////////////////
// (3) 改错题
//////////////////////////////////////////////////////////////////////////

class Shape
{
public:
    Shape(const char* id, const char* name)
    {
        shapeName = new char[strlen(name) + strlen(id)];
        strcpy(shapeName, name);
        strcpy(shapeName + strlen(name), id);
    }

    ~Shape()
    {
        //delete shapeName;
    }

    const char* getName()
    {
        return shapeName;
    }

private:
    char* shapeName;
};


void PrintShape(Shape* shape)
{
    cout << "name: " << shape->getName() << endl;
}

void TestTheShapeClass()
{
    vector<Shape> shapes;
    shapes.push_back(Shape("1", "Rect: "));
    shapes.push_back(Shape("2", "Circle: "));

    for (size_t i = 0; i < shapes.size(); ++i)
    {
        PrintShape(&shapes[i]);
    }

    shapes.clear();
}

void TestGetMemory()
{
    char* str = NULL;
    str = Get100Memory(str);
    char str1[100] = "hello world";
    strcpy_s(str, strlen(str1) + 1, str1);
    cout << str << endl;
}

//////////////////////////////////////////////////////////////////////////
// (4) 算法实现题A
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// (5) 算法实现题B
//////////////////////////////////////////////////////////////////////////

/*
题：ArrayTest
    术语：数组是有序的元素序列，组成数组的各个元素称为数组分量。
          用于区分数组的各个元素的数字编号称为下标。

    功能：根据输入的数组维度，打印出该数组的所有数组分量，数组下标是从0开始。

    注意：数组维度不是固定的，可以是一维数组、二维数组、三维数组、...、N维数组。

    例如：一维数组:
    input = {3}
    output = {
        A[0], A[1], A[2]
    }

    例如，二维数组：
    input = {2,3}
    output = {
        A[0][0], A[0][1], A[0][2],
        A[1][0], A[1][1], A[1][2]
    }

    例如，三维数组：
    input = {3,2,3}
    output = {
        A[0][0][0], A[0][0][1], A[0][0][2],
        A[0][1][0], A[0][1][1], A[0][1][2],
        A[1][0][0], A[1][0][1], A[1][0][2],
        A[1][1][0], A[1][1][1], A[1][1][2],
        A[2][0][0], A[2][0][1], A[2][0][2],
        A[2][1][0], A[2][1][1], A[2][1][2]
    }

    例如，N维数组：
    ...
*/


// 利用模版和递归的原理，实现多维数组打印输出
template <typename T, size_t N>
void PrintArray(const T(&arr)[N])
{
    for (int i = 0; i < N; i++) {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

template <typename T, size_t N, size_t M>
void PrintArray(const T(&arr)[N][M])
{
    for (int i = 0; i < N; i++) {
        PrintArray(arr[i]);
    }
}

void TestArrayAlgorithm()
{
    // 修改arr数组可测试各种维度数组打印输出
   /* // 二维
    int arr[2][3] = { {1,2,3},{4,5,3} };*/

    int arr[2][2][4][2] = { {
      { {1,2},{1,3},{4,2},{4,2} },
       { {13,2},{15,2},{17,2},{4,2}}
    } ,{
      { {7,2},{7,3},{7,2},{4,2} },
       { {13,2},{15,2},{17,2},{4,2}}
    } };

    PrintArray(arr);
}

//////////////////////////////////////////////////////////////////////////
// Main 此处为测试代码，可以按需修改以测试前面编写的函数
//////////////////////////////////////////////////////////////////////////
int main()
{
    cout << "Case1: TestVectorTraversor()..." << endl;
    TestVectorTraversor();

    cout << "Case2: TestGetMemory()..." << endl;
    TestGetMemory();

    cout << "Case3: TestTheShapeClass()..." << endl;
    TestTheShapeClass();

    cout << "Case4-B: TestArrayAlgorithm()..." << endl;
    TestArrayAlgorithm();

    system("pause");
    return 0;
}

