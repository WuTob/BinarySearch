#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
int BinarySearch(T key, T* datas, int l, int r);

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	cout << BinarySearch<int>(6, a, 0, 4);

	system("pause");
}

template <typename T>
int BinarySearch(T key, T* datas, int l, int r)
{
	if (r < l)
		return -2; //异常返回-2

	int mid = (r + l) / 2;

	if (l == r && l == mid)
		return -1; //未找到返回-1
	if (datas[mid] == key)
		return mid; //找到返回坐标
	if (datas[mid] < key)
		return BinarySearch(key, datas, mid + 1, r);
	if (datas[mid] > key)
		return BinarySearch(key, datas, l, mid - 1);
}

int BinarySearch(int key, int* datas, int max)
{
	int l = 0, r = max, int mid;

	for (mid = (l + r) / 2; !(l == r && l == mid); mid = (l + r) / 2)
	{

	}
}