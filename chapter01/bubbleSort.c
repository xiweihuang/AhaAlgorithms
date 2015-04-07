// 76 18 99 35 12

#include <stdio.h>

int main()
{
	int a[] = { 76, 18, 99, 35, 12 };

	int i, j, t;

	for (i=0; i<4; i++) {
		for (j=i+1; j<5; j++) {
			if (a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	for (i=0; i<5; i++)
		printf("%d  ", a[i]);

	printf("\n");
	return 0;
}