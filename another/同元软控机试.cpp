//////////////////////////////////////////////////////////////////////////
// ͬԪ�����Ϣ�������޹�˾ C++ ��������
// ���棺����ͬԪ��ذ�Ȩ���У�������ɢ����������׷���������Σ�
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
// (1) �Ĵ���
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
// (2) �Ĵ���
//////////////////////////////////////////////////////////////////////////

char* Get100Memory(char* p)
{
    p = new char[100];
    return p;
}

//////////////////////////////////////////////////////////////////////////
// (3) �Ĵ���
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
// (4) �㷨ʵ����A
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// (5) �㷨ʵ����B
//////////////////////////////////////////////////////////////////////////

/*
�⣺ArrayTest
    ��������������Ԫ�����У��������ĸ���Ԫ�س�Ϊ���������
          ������������ĸ���Ԫ�ص����ֱ�ų�Ϊ�±ꡣ

    ���ܣ��������������ά�ȣ���ӡ���������������������������±��Ǵ�0��ʼ��

    ע�⣺����ά�Ȳ��ǹ̶��ģ�������һά���顢��ά���顢��ά���顢...��Nά���顣

    ���磺һά����:
    input = {3}
    output = {
        A[0], A[1], A[2]
    }

    ���磬��ά���飺
    input = {2,3}
    output = {
        A[0][0], A[0][1], A[0][2],
        A[1][0], A[1][1], A[1][2]
    }

    ���磬��ά���飺
    input = {3,2,3}
    output = {
        A[0][0][0], A[0][0][1], A[0][0][2],
        A[0][1][0], A[0][1][1], A[0][1][2],
        A[1][0][0], A[1][0][1], A[1][0][2],
        A[1][1][0], A[1][1][1], A[1][1][2],
        A[2][0][0], A[2][0][1], A[2][0][2],
        A[2][1][0], A[2][1][1], A[2][1][2]
    }

    ���磬Nά���飺
    ...
*/


// ����ģ��͵ݹ��ԭ��ʵ�ֶ�ά�����ӡ���
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
    // �޸�arr����ɲ��Ը���ά�������ӡ���
   /* // ��ά
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
// Main �˴�Ϊ���Դ��룬���԰����޸��Բ���ǰ���д�ĺ���
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

