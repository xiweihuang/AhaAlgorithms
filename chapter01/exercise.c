// // 采用桶排序
// #include <stdio.h>

// int main()
// {
// 	int book[] = { 20, 40, 32, 67, 40, 20, 89, 300, 400, 15 };

// 	int tab[1000];
// 	int i;
// 	for (i=0; i<1000; i++)
// 		tab[i] = 0;

// 	for (i=0; i<10; i++)
// 		tab[book[i]]++;

// 	int count = 0;
// 	int j;
// 	for (i=0; i<1000; i++) {
// 		if (tab[i] > 0) {
// 			count++;
// 			printf("%d  ", i);
// 		}
// 	}
// 	printf("\n%d\n", count);
// 	// printf("\n");
// 	return 0;
// }


// 采用快速排序
#include <stdio.h>

void quickSort(int* array, int left, int right)
{
	if (left > right)
		return;

	int temp = array[left]; // 基准数
	int i = left, j = right;
	int t;

	while (i != j) {
		// 右往左
		while (array[j] <= temp && i < j)
			j--;
		while (array[i] >= temp && i < j)
			i++;

		if (i<j) {
			t = array[i];
			array[i] = array[j];
			array[j] = t;
		}
	}

	array[left] = array[i];
	array[i] = temp;

	quickSort(array, left, i-1);
	quickSort(array, i+1, right);

	return;
}

int main()
{
	int book[10] = { 20, 40, 32, 67, 40, 20, 89, 300, 400, 15 };
	// printf("%p\n", book);
	quickSort(book, 0, 9);

	int i;
	for (i=0; i<10; i++) {
		printf("%d  ", book[i]);
	}
	printf("\n");
	return 0;
}