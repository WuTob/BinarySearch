#include <iostream>
using namespace std;

int main()
{

}

template<typename T>
int BinarySearch(T key, T[] a, int l, int r)
{
    int mid;

    if(l == r || r < l)  return -1; //区间异常，返回-1

    mid = (r - l) / 2;
    if (l == mid == r) return 

}