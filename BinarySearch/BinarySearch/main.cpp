#include <iostream>
using namespace std;

int main()
{
	
}

template <typename T>
int BinarySearch(T key, T[] datas, int l, int r)
{
	if (l == r || r < l)
		return -1; //Òì³£·µ»Ø-1

	int mid = (r + l) / 2;

	if (datas[mid] == key)
		return mid;
	if (datas[mid] < key)
		return BinarySearch(mid, r);
	if (datas[mid] > key)
		return BinarySearch(l, mid);



}