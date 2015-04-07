// 8,5,5,3,2

// #include <stdio.h>

// int main()
// {
// 	int a[11], i, j, t;
// 	//初始化为0
// 	for (i=0; i<11; i++)
// 		a[i] = 0;

// 	//读取5个数
// 	for (i=1; i<=5; i++) {
// 		scanf("%d", &t);
// 		a[t] = a[t] + 1;
// 	}

// 	for (i=0; i<11; i++) {
// 		for (j=1; j<=a[i]; j++) {
// 			printf("%d", i);
// 		}
// 	}

// 	// getchar();
// 	printf("\n");

// 	return 0;
// }
//=======================


#include <stdio.h>

int main()
{
	int book[1001], i, j, t, n;

	for (i=0; i<=1000; i++) {
		book[i] = 0;
	}

	for (i=1; i<=10; i++) {
		scanf("%d", &t);
		book[t] = book[t] + 1;
	}

	//按顺序输出
	for (i=1000; i>=0; i--) {
		for (j=1; j<=book[i]; j++) {
			printf("%d  ", i);
		}
	}

	printf("\n");

	return 0;
}