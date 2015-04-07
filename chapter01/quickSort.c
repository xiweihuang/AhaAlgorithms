#include <stdio.h>

int a[101], n;

void quicksort(int left, int right)
{
	int i, j, t, temp;

	if (left > right)
		return;

	temp = a[left]; //基准数
	i = left;
	j = right;

	while (i!=j) {
		//从右往左找
		while (a[j] >= temp && i < j)
			j--;

		//从左往右找
		while (a[i] <= temp && i < j)
			i++;

		//交换两个数在数组中的位置
		if (i < j) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	//最终将基准数归位
	a[left] = a[i];
	a[i] = temp;

	quicksort(left, i-1);  //继续处理左边的，这里是一个递归的过程
	quicksort(i+1, right); //继续处理右边的， 这里是一个递归的过程

	return;

}

int main()
{
	int i, j;
	scanf("%d", &n);

	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);

	quicksort(1, n);

	for (i=1; i<=n; i++)
		printf("%d  ", a[i]);

	printf("\n");

	return 0;
}