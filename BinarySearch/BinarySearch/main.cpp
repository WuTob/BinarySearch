#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
int BinarySearch(T key, T* datas, int l, int r);

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	cout << BinarySearch<int>(4, a, 0, 4);

	system("pause");
}

template <typename T>
int BinarySearch(T key, T* datas, int l, int r)
{
	if (r < l)
		return -2; //异常返回-2
	if (l == r)
		return -1; //未找到返回-1

	int mid = (r + l) / 2;

	if (datas[mid] == key)
		return mid;
	if (datas[mid] < key)
		return BinarySearch(key, datas, mid, r);
	if (datas[mid] > key)
		return BinarySearch(key, datas, l, mid);
}