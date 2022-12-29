#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, k, T, i = 1;
	int count = 0;
	int m = 1;
	int sum = 1;
	scanf("%d%d%d", &n, &k, &T);
	int temp = T;
	vector<int> storage;
	storage.push_back(1);
	for (int j = 1;; j++) {
		i += j;
		count++;
		if (i > k - 1) i = i - k;
		if (count == n) {
			if (i > k - 1) storage.push_back(i - k);
			else storage.push_back(i);
			count = 0;
			T--;
			sum += storage[m];
			m++;
		}
		if (T == 1) {
			break;
		}
	}
	printf("%d", sum);
	return 0;
}
//【3】取模运算的分配律（解决数据超范围问题）
//
//
//
//        ① 取模运算的加法分配律：(a+b)%p=(a%p+b%p)%p；
//
//        ② 取模运算的乘法分配律：(a*b)%p=(a%p*b%p)%p；
//
//        ③ 特别注意取模运算的分配律是没有除法的！！！
