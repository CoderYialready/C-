#include <iostream>
#include <stdlib.h>
using namespace std;

int *func()
{
	int *p = new int(10);
	return p;
}

void test01()
{
	int *pb = func();
	cout << *pb << endl;
	delete pb; 
	cout << *pb << endl;
}
void test02()
{
	int *arr = new int[10];
	for(int i =0;i < 10;i++)
	{
		arr[i] = i + 100;
	}
	delete [] arr;
	for(int i =0;i < 10;i++)
	{
		cout << arr[i] << endl;	
	}
}
int main()
{
	//test01();
	test02();
    return 0;
}

