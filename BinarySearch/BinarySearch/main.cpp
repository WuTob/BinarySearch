#include <iostream>
using namespace std;

int main()
{
	
}

template <typename T>
int BinarySearch(T key, T[] datas, int l, int r)
{
	if (l == r || r < l)
		return -1; //区间异常返回-1

	int mid = (r + l) / 2;

	if(mid == l)
	{
		if(datas[mid] == key)
			return mid;
		else
			return -1; //TODO:返回区间
	}

	if (datas[mid] == key)
		return mid;
	if (datas[mid] < key)
		return BinarySearch(mid, r);
	if (datas[mid] > key)
		return BinarySearch(l, mid);

}